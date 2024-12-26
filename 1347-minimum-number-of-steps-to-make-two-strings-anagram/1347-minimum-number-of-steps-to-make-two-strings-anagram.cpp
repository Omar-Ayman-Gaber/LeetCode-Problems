class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        int frcs[26] = { 0 };
        int frct[26] = { 0 };
        for (int i = 0;i < s.size();i++)
        {
            frcs[s[i] - 'a']++;
            frct[t[i] - 'a']++;
        }
        for (short i = 0;i < 26;i++)
            ans += abs(frcs[i] - frct[i]);
        return ans/2;
    }
};