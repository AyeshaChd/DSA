class Solution {
public:
 int result(int x, string Operation)
    {
        if(Operation == "++X" || Operation == "X++")
        {x +=1;}
        if(Operation == "--X" ||Operation== "X--") 
        {x -=1;}
        return x;
    };
    int finalValueAfterOperations(vector<string>& operations)
   {
        int n = operations.size();
        int x=0;
     for (int i=0;i<n;i++)
     {
     
        x = result(x,operations[i]);
     };
     return x;
        
    };
};