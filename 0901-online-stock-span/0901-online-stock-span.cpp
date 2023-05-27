class StockSpanner {
public:
  stack<pair<int,int>>s;
  int i=1;
    StockSpanner() {
        
    }
    
    int next(int price) {
      while(!s.empty()&&price>=s.top().first)
      {
        s.pop();
      }
      int f=i;
       if(!s.empty()) f=i-s.top().second;
      s.push({price,i++});
      return f;
      
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */