class KthLargest {
public:
  priority_queue<int,vector<int>,greater<int>>p;
  int s;
    KthLargest(int k, vector<int>& nums) {
       s=k;
      for(auto x:nums)
      {
        p.push(x);
        if(p.size()>k) p.pop();
      }
        
    }
    
    int add(int val) {
      p.push(val);
      if(p.size()>s)  p.pop();
      return p.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */