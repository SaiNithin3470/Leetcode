class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>vec;
        int n=names.size();
         map<int,string>map1;
        for(int i=0;i<n;i++)
        {
            map1[heights[i]]=names[i];
        }
        while(map1.size()>0)
        {
            vec.push_back(map1.rbegin()->second);
            map1.erase(map1.rbegin()->first);
        }
        return vec;

        
    }
};