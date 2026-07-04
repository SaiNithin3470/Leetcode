class Solution {
public:
    int addDigits(int num) {
        int add=0;
        int ans=0;
        int fin=0;
        

        
        while(num>0 )
        {
            add+=num%10;
            num=num/10;

        }
        while(add>0)
        {
             ans+=add%10;
             add=add/10;
            
        }
        if(ans<10)
        {
            return ans;
        }
        add=ans;
        ans=0;
        while(add>0)
        {
            ans+=add%10;
            add=add/10;
        }
        return ans;

        
    }
};