class Solution {
public:
    bool halvesAreAlike(string s) {
        short cnt1 = 0, cnt2 = 0;
        for (short i = 0;i < s.size() / 2;i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                cnt1++;
        }
        for (short i = s.size()/2;i < s.size();i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                cnt2++;
        }
        if (cnt1 == cnt2)
            return 1;
        return 0;
    }
};