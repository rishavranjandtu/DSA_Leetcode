class SnapshotArray {
public:
    vector<map<int,int>>m;
    int s=0;
    SnapshotArray(int length) {
        m.resize(length);
      
        for(int i=0;i<length;i++) m[i][0]=0;
    }
    
    void set(int index, int val) {
        m[index][s]=val;
    }
    
    int snap() {
        s++;
      return s-1;
    }
    
    int get(int index, int snap_id) {
      if(m[index].find(snap_id)==m[index].end()) {
         auto it = --m[index].lower_bound(snap_id);
            return it->second;
      }
      return m[index][snap_id];
        
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */