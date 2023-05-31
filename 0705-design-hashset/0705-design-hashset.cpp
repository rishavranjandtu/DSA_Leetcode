class MyHashSet {
public:
  vector<list<int>>m;
    MyHashSet() {
      m.resize(100);
        
    }
  
    int h_key(int n)
    {
      return n%11;
    }
  
   list<int>::iterator search(int key)
   {
     
     int i=h_key(key);
     return find(m[i].begin(),m[i].end(),key);
     
   }
    
    void add(int key) {
      if(contains(key)) return;
      int i=h_key(key);
        
      m[i].push_back(key);
    }
    
    void remove(int key) {
      if(contains(key)==false) return;
      int i=h_key(key);
      m[i].erase(search(key));
        
    }
    
    bool contains(int key) {
      int i=h_key(key);
      if(search(key)==m[i].end()) return false;
      return true;
      
      
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */