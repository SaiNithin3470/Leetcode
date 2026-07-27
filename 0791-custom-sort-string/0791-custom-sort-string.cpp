class Solution {
public:
    string customSortString(string order, string s) {
        int n=s.length();
        int m=order.length();
        unordered_map<char,int>map1;
        string result="";
        int j;
        int a;
        for(int i=0;i<n;i++)
        {
            map1[s[i]]++;
        }
        int i=0;

       while(i<m)
        {
               if(map1.count(order[i])==1)
               {
                  a=map1[order[i]];
                  while(a>0)
                  {
                   result+=order[i];
                   a--;
                  }
                  map1.erase(order[i]);
               }
               i++;


        }
        if(map1.size()==0)
        {
            return result;
        }
        else{
            for(auto x:map1)
            {
               while(x.second>0)
               {
                result+=x.first;
                x.second--;
               }
            }
            return result;
        }

        
    }
};