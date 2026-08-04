class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>map1;
        for(int i=0;i<nums.size();i++)
        {
            map1[nums[i]]++;
        }
        int sum=0;
        sum+=nums[0];
        int i=1;
        
            while( i<nums.size()&&nums[i-1]+1==nums[i] )
            {
                sum+=nums[i];
                i++;
            }
    
        
        if(map1.count(sum)==0)
        {
             return sum;
         }
         
        else{
                    
            while(map1.count(sum+1)==1)
                {
                        sum=sum+1;
                    

                }
            }
        
        return sum+1;

        
    }
};