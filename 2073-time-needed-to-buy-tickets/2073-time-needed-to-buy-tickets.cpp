class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
         int target=tickets[k];
         int total_time=0;
         for(int i=0; i<tickets.size();i++)
         {
            // if(i<=k)
            // {
total_time+=min(target,tickets[i]);
            // }
            // else{
            //     total_time+=min(target-1,tickets[i]);
            // }
         }
         return total_time; 
    }
};