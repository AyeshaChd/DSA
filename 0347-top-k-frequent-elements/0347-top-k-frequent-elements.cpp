class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
vector<pair<int,int>>freq;
        vector<int>ans;
        for(int i=0; i<nums.size();i++)
        {
            mp[nums[i]]++;

        };
        // pushing key of mp as value in vector becz we have to sort frq vise
        for(auto it:mp)
        {
freq.push_back({it.second,it.first});
        };
        // bubble sort to sort vector on base of frequency of elements
        for(int i=freq.size()-1;i>=0;i--)
        {
            for(int j=0 ;j<=i-1;j++)
            {// careful of < as we have to sort in descending ,> will do ascending
            
                if(freq[j].first < freq[j+1].first)
                {  
                    //  we have to swap whole pair 
                    pair<int,int> temp;
                    temp=freq[j+1];
                    freq[j+1]=freq[j];
                    freq[j]=temp;

                };
            };
        };
        for(int i=0; i<k;i++)
        {
            ans.push_back(freq[i].second);
        };
       
        return ans;
      
    }
};