class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 == 1)
            return 0;
        else
        {
            stack<char>st;
            for (int i = 0;i < s.size();i++)
            {
                if (st.empty())
                    st.push(s[i]);
                else
                {
                    if (st.top() == '(' && s[i] == ')')
                        st.pop();
                    else if (st.top() == '[' && s[i] == ']')
                        st.pop();
                    else if (st.top() == '{' && s[i] == '}')
                        st.pop();
                    else
                        st.push(s[i]);
                }
            }
            if (st.size())
                return 0;
            else
                return 1;
        }
    }
};