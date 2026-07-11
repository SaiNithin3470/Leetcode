class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        map<int,int>map;
        int count=0;
       for(int x:nums)
       {
        count+=map[x];
        map[x]++;
       }
        return count;
        
    }
};