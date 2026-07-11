class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        unordered_map<char,char>hashmap;
        for (int i = 0; i < jewels.size(); i++) {
            hashmap[jewels[i]];
            };
        for(int i=0; i<stones.size();i++)
        {
            if(hashmap.find(stones[i])!=hashmap.end())count++;
        };

        
        return count;
    };
};