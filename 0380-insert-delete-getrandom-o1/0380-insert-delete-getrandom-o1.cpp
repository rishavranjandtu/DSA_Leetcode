class RandomizedSet {
public:
  unordered_map<int,int>m;
  vector<int>v;
  int c=0;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
      if(m.find(val)==m.end())
      {
        m[val]=c;
        v.push_back(val);
        c++;
        return true;
      }
      return false;
    }
    
    bool remove(int val) {
       if(m.find(val)!=m.end())
      {
        int i=m[val];
         v[i]=v[v.size()-1];
         v.pop_back();
         m[v[i]]=i;
         m.erase(val);
         c--;
        return true;
      }
      return false;
        
    }
    
    int getRandom() {
     int r=rand()%c;
      return v[r];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */