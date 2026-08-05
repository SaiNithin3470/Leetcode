class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>map1;
        vector<int>vec;
        int total;
        for(int i=0;i<nums.size();i++)
        {
            map1[nums[i]]++;
        }
        for(auto x:map1)
        {
            if(x.second==2)
            {
                vec.push_back(x.first);
            }
        }
        if(vec.size()==0)
        {
            return 0;
        }
        else
        {
            total=vec[0];
            for(int i=1;i<vec.size();i++)
            {
                total^=vec[i];
            }
        }
        return total;
    }
};