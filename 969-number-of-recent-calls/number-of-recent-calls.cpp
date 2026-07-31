class RecentCounter {
 vector<int>v;
  int count;
public:
    RecentCounter() {
       int count=0; 
    }
    
    int ping(int t) {
        count=0;
        v.push_back(t);
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=t-3000 && v[i]
            <=t)  count++;
        }
        return count;
    }
   
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */