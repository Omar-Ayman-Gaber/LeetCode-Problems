class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>st1={arr.begin(),arr.end()};
        set<int>st2;
        map<int,int>mp;
        for(auto it:arr)
        mp[it]++;
        for(auto it:mp)
        st2.insert(it.second);
        if(st1.size()==st2.size())
        return 1;
        return 0;
    }
};