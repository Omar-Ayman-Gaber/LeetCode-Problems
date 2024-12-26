class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        vector<int> fr(26);
        for (int i = 0; i < s.size(); i++)
            fr[s[i] - 'a']++;
        for (int i = 0; i < s.size(); i++) {
            if (fr[s[i] - 'a'] == 1) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};