class Solution {
public:
    int longestPalindrome(string s) {
        int cnt = 0, odd = 0;
        map<int, int> mp;
        for (auto it : s)
            mp[it]++;
        for (auto it : mp) {
            if (it.second % 2 == 0)
                cnt += it.second;
            else {
                cnt += (it.second - 1);
                odd++;
            }
        }
        if (odd)
            cnt++;
        return cnt;
    }
};