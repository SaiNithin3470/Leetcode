class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,vector<int>>map1;
        unordered_map<char,vector<int>>map2;
        string temp="";
        string word="";
        int i=0;
        int count=0;
        int wordIndex=0;
       
        while(i<s.length())
        {
            if(s[i]!=' ')
            {
               temp+=s[i];
            }
            else{
                map1[temp].push_back(wordIndex);
                temp="";
                wordIndex++;
            }
            i++;
        }
        if(!temp.empty())
        {
            map1[temp].push_back(wordIndex);
            wordIndex++;
        }
        for(int i=0;i<pattern.length();i++)
        {
            map2[pattern[i]].push_back(i);
        }
        if(map1.size()!=map2.size())
        {
            return false;
        }
        for(auto x :map1)
        {
            char character=pattern[map1[x.first][0]];
            if(x.second==map2[character])
            {
                count++;
            }

        }
        if(count==map1.size())
        {
            return true;
        }
        return false;
      

        
    }
};