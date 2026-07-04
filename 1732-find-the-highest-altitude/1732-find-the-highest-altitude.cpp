class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest=0;
        // int previous=0;
        int  current_altitude = 0;
      
        for(int i=0;i<gain.size();i++)
        {
            current_altitude = current_altitude + gain[i] ;

               if(current_altitude > highest)
               {
                highest =    current_altitude;
               }
        }
        return  highest;
        
    }
};