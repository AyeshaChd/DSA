class MyHashSet {

    // unordered_set<int>v;
    vector<int>v;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        // v.insert(key);
        for(int i=0;i<v.size();i++)
    {
        if(v[i]==key) return;
    }
    
        v.push_back(key);
    }
    
    void remove(int key) {
    //    if(v.find(key) != v.end()) v.erase(key);
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key) v[i]=-1;
    }
    }
    
    bool contains(int key) {
    //    if(v.find(key) != v.end()) return true;
    //    else return false;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==key) return true;
    }
    return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */