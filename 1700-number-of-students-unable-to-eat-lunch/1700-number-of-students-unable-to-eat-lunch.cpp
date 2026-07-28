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
     // If everyone has been rotated once and no one took the sandwich,
            // no more sandwiches can be served.
            // count == q.size().

// This means every student currently in the queue has had one chance, and none wanted the sandwich on top. Since the sandwich never changes until someone takes it, the process is stuck forever.
     if(count==q.size())
     break;
    }
    
   }
    return q.size();
    };
};