class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>map1;
        map<int,int>map2;
        vector<vector<int>>result;
        vector<int>temp;
        for(int i=0;i<items1.size();i++)
        {
            map1[items1[i][0]]=items1[i][1];
        }
        for(int i=0;i<items2.size();i++)
        {
            map2[items2[i][0]]=items2[i][1];
        }
        for(auto x :map1)
        {

            if(map2.count(x.first)!=0)
            {
                temp.push_back(x.first);
                temp.push_back(x.second+map2[x.first]);
                result.push_back(temp);
                map2.erase(x.first);
                temp.clear();
                
            }
            else{
                 temp.push_back(x.first);
                 temp.push_back(x.second);
                 result.push_back(temp);
                 temp.clear();
            }
            
            
        }
        for(auto x:map2)
        {
            temp.push_back(x.first);
            temp.push_back(x.second);
            result.push_back(temp);
            temp.clear();
        }
        sort(result.begin(),result.end());
        return result;

        
    }
};