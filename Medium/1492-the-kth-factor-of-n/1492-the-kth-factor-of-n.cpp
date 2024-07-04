class Solution {
public:
    int kthFactor(int n, int k) {
        set<int>st;
        vector<int>v;
        for (int i = 1;i * i <= n;i++)
        {
            if (n % i == 0)
            {
                st.insert(i);
                st.insert(n / i);
            }
        }
        if (st.size() < k)
            return -1;
        v = { st.begin(),st.end() };
        return v[k - 1];
    }
};