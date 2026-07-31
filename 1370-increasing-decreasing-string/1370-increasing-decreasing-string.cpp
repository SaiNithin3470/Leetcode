class Solution {
public:
    string sortString(string s) {
        string result="";
        map<char,int>map1;

        for(int i=0;i<s.length();i++)
        {
               map1[s[i]]++;
        }
        while(map1.size()!=0)
        {
           for(auto x=map1.begin();x!=map1.end();++x)
           {
             if(x->second>0)
             {
                result.push_back(x->first);
                x->second--;
             }
           }
           for (auto it = map1.begin(); it != map1.end(); ) {
              if (it->second == 0) {
              it = map1.erase(it); 
              } 
              else {
               ++it;
                }
                
                   }
            if(map1.empty())
            {
                break;
            }       
           for(auto x=map1.rbegin();x!=map1.rend();++x)
           {
             result.push_back(x->first);
             map1[x->first]--;
            }
           
           for (auto it = map1.begin(); it != map1.end(); ) {
              if (it->second == 0) {
              it = map1.erase(it); 
              } else {
               ++it;
                }
                   }

        }
        return result;
        
    }
};