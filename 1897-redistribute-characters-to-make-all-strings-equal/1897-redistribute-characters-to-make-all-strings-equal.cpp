class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int>map1;
        string temp="";
        if(words.size()==0)
        {
            return false;
        }
        if(words.size()==1)
        {
            return true;
        }
        for(int i=0;i<words.size();i++)
        {
             temp=words[i];
             for(int i=0;i<temp.length();i++)
             {
                map1[temp[i]]++;
             }
        }
        for(auto x:map1)
        {
            if(x.second%words.size()!=0)
            {
                return false;
            }
        }
        return true;
        
    }
};