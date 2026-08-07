class Solution {
public:
    string alphabetBoardPath(string target) {
        map<char,vector<int>>map1;
        char temp='a';
        int count=0;
        string result="";
        vector<int>t;
        
        for(int i=0;i<6;i++)
        {
            count=0;
            while(count!=5 && temp<='z')
            {
             map1[temp].push_back(i);
             map1[temp].push_back(count);
             temp++;
             count++;
            }
            
        }
         int current_r=0;
          int current_c=0;
        for(int i=0;i<target.length();i++)
        {
            t=map1[target[i]];
             if(current_r>t[0])
            {
                while(current_r!=t[0])
                {
                    current_r--;
                    result.push_back('U');
                }
            }
             if(current_c>t[1])
            {
                while(current_c!=t[1])
                {
                    current_c--;
                    result.push_back('L');
                }
            }
           
            if(current_r<t[0])
            {
               while(current_r!=t[0])
               {
                  current_r++;
                  result.push_back('D');
               }
            }
            
           
            if(current_c<t[1])
            {
                while(current_c!=t[1])
                {
                    current_c++;
                    result.push_back('R');
                }
            }
             
                result.push_back('!');
            
           
           
            
        }
        return result;



        
    }
};