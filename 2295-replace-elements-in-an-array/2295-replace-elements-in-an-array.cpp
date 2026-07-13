class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        int n=operations.size();
        int m=nums.size();
        int j=0;
        int i=0;
        int k;
        int l;
        int index;
        vector<int>vec;
        map<int,int>map;
        while(j<m)
        {
            map[nums[j]]=j;
            j++;

        }
        j=0;
        
        while(i<n)
        {
            if(map.count(operations[i][0])==1)
            {
                l=operations[i][0];
               k=operations[i][1];
              nums[map[l]]=k;
              index=map[l];
              map.erase(l);
              map[k]=index;
            }
            
            i++;
        }
        
        
        return nums;
        
        
    }
};