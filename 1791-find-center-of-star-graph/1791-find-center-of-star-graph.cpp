class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < edges.size(); i++) {
            for (int j = 0; j < edges[i].size(); j++)
                mp[edges[i][j]]++;
        }
        for (auto it : mp) {
            if (it.second == edges.size())
                ans = it.first;
        }
        return ans;
    }
};