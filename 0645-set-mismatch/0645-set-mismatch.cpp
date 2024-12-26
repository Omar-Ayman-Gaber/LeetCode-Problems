class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> frec(nums.size() + 1), ans;
        int cnt = 0, x = 0, y = 0;
        for (auto it : nums)
            frec[it]++;
        for (int i = 1; i <= frec.size() && cnt != 2; i++) {
            if (frec[i] == 0) {
                y = i;
                cnt++;
            } else if (frec[i] == 2) {
                x = i;
                cnt++;
            }
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};