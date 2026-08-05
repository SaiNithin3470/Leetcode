class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>map1;
        
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            map1[nums[i]]++;
        }
        for(auto x:map1)
        {
            if(x.second==2)
            {
                total^=x.first;
            }
        }
       
        
        return total;
    }
};