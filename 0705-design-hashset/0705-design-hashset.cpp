class MyHashSet {

    unordered_set<int>v;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        v.insert(key);
    }
    
    void remove(int key) {
       if(v.find(key) != v.end()) v.erase(key);
    }
    
    bool contains(int key) {
       if(v.find(key) != v.end()) return true;
       else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */