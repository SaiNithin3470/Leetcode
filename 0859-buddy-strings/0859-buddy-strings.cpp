class Solution {
public:
    bool buddyStrings(string s, string goal) {
        map<char,int>map1;
        if(s.length()!=goal.length())
        {
            return false;
        }
        else if(s==goal)
        {
            for(int i=0;i<s.length();i++)
            {
                map1[s[i]]++;
            }
            if(map1.size()==s.length())
            {
                return false;
            }
            return true;
        }
        else{
        vector<int>vec;
        for(int i=0;i<s.length();i++)
        {
              if(s[i]!=goal[i])
              {
                vec.push_back(i);
              }
        }
        if(vec.size()!=2)
        {
            return false;
        }
         swap(s[vec[0]],s[vec[1]]);
         if(s!=goal)
         {
            return false;
         }
         
        }
        return true;

        
    }
};