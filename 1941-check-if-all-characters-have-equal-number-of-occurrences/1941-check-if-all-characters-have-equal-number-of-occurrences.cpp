class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>map1;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            map1[s[i]]++;
        }
        int a=map1.begin()->second;
        for(auto x:map1)
        {
            if(x.second!=a)
            {
               return false;
            }
        }
        return true;
    }
};