class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (int i = 0;i < s.size();i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                str += s[i] + 32;
            else if (s[i] >= 'a' && s[i] <= 'z')
                str += s[i];
            else if(s[i] >= '0' && s[i] <= '9')
                str += s[i];
        }
        string temp = str;
        reverse(str.begin(), str.end());
        if (str == temp)
            return 1;
        else
            return 0;
    }
};