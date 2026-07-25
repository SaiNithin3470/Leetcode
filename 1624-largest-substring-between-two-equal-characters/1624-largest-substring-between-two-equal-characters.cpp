class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,int>map1;
        int a=-1;

        for(int i=0;i<s.length();i++)
        {
            if(map1.count(s[i])==0)
            {
                map1[s[i]]=i;
            }
            else{
                 a=max(a,abs(map1[s[i]]-i)-1);
                 

            }
        }
       
        return a;
        
    
        
    }
};