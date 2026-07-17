class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>vec;
        int n=nums.size();
        map<int,int>map1;
        for(int i=0;i<n;i++)
        {
            map1[nums[i]]++;
        }
        for(auto x : map1)
        {
            if(x.second>(n/3))
            {
                  vec.push_back(x.first);
            }
        }
        return vec;
        
    }
};