class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    int i=0;
    int count =0;  // Number of students rotated without taking sandwich
    queue<int>q;
    for(int s :students)
    {
    q.push(s);
    }
   while(!q.empty())
   {
    if(sandwiches[i]== q.front())
    {
        q.pop();
        i++;
        count=0;
    }
    else{
     q.push(q.front());
     q.pop();
     count++;
     if(count==q.size())
     break;
    }
    
   }
    return q.size();
    };
};