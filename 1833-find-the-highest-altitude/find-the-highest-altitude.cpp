class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current_latitude=0;
        int maximum_latitude=0;

        for(int i=0; i<gain.size();i++)
        {
            current_latitude=current_latitude+gain[i];
            if(current_latitude > maximum_latitude)
            {
                maximum_latitude=current_latitude;
            }

        }
        return maximum_latitude;

        
    }
};