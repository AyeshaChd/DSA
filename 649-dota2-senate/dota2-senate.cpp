class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r;
        queue<int>d;int n=senate.length();
        
        for(int i=0 ;i<senate.length();i++)
        {
            if(senate[i]== 'D')
            {
                 d.push(i);
                }
              else r.push(i) ;

            } 
        
       while( ! r.empty() && !d.empty() )
       {
          if(r.front()<d.front())
          {
            d.pop();r.push(r.front() + n);
            r.pop();
          } 
          else{
            r.pop();d.push(d.front() + n);
            d.pop();
          }
       };

       if(r.empty()) return "Dire"; else return "Radiant";
    }
};
