class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int max=0;
     int buy=prices[0];
     int i=0; int n=prices.size();
     while(i<n)
     
     {
        if(buy>prices[i])buy=prices[i];
        if(prices[i]-buy >max)max=prices[i]-buy;
      i++;  
     }
return max;
    };
};