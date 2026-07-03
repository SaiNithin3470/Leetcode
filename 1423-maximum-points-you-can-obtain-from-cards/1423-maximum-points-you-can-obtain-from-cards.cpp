class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int i=0;
    
        map<int,int>map;
        int sum=0;
        int total=0;
       int left_sum=0;
        int left_index=k-1;
        int right_index=n-1;


        for(int i=0;i<k;i++)
        {
            sum=sum+cardPoints[i];
            
        }
        
        total=sum;
        while(k>0)
        {
            sum=sum-cardPoints[left_index];
            sum=sum+cardPoints[right_index];
            if(sum>total)
            {
                total=sum;
            }
            left_index--;
            right_index--;
            k--;
        }
        return total;
        


        
    }
};