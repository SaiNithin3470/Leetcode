class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>map1;
        vector<int>vec;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            map1[nums[i]]++;
        }
        for(auto x:map1)
        {
            if(x.second==1)
            {
                if(map1.count(x.first+1)==0 && map1.count(x.first-1)==0)
                {
                   vec.push_back(x.first);
                }
            }
        }
        return vec;
        
    }
};