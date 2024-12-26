class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() == t.size())
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if (s == t)
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
};