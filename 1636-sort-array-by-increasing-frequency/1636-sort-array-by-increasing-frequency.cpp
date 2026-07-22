class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>map1;
        int smallest=INT_MAX;
        int a;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            map1[nums[i]]++;
        }
        while(map1.size()!=0)
        {
           for(auto x : map1)
           {
            if(x.second<=smallest)
            {
                smallest=x.second;
                a=x.first;

            }

            }
            while(smallest>0)
            {
                ans.push_back(a);
                smallest--;
            }
            map1.erase(a);
            smallest=INT_MAX;

        }
        return ans;

        
    }
};