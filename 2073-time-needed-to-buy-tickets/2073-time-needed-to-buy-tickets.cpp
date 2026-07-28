class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
         int target=tickets[k];
         int total_time=0;
      queue<int>q;
         for(int i=0; i<tickets.size();i++)
         {
             q.push(i);
         }
         while( !q.empty())
         {
            if(tickets[q.front()]-1 != 0)
            {
              tickets[q.front()]-= 1; 
              q.push(q.front());
              q.pop();
              total_time++;
            }
            if( q.front()== k && tickets[q.front()]-1 == 0)
            {
total_time++;
break;
            }
            if(  tickets[q.front()]-1 == 0)
            {
                tickets[q.front()]=0;
                total_time++;
                q.pop();
            }
            
         }
         return total_time; 
    }
};