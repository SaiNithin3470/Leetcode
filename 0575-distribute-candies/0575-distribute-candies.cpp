class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
      set<int>set1;
      int n=candyType.size();
      for(int i=0;i<candyType.size();i++)
      {
        set1.insert(candyType[i]);
      }
      return min(n/2,(int)set1.size());
    }
};