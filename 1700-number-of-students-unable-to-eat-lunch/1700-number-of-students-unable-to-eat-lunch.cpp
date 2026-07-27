class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         int arr[2]={0,0};
        for(int i=0; i< students.size();i++)
        {
            arr[students[i]]++;
        };
        for(int i:sandwiches)
        {
            if(arr[i]==0)
            {
                break;
            }
            arr[i]--;
        }
       return arr[0]+arr[1];
       
        
    }
};