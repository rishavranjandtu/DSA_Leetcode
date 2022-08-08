class StockSpanner {
public:
    stack<int> s;
    vector<int> v;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        v.push_back(price);
        
        while(!s.empty()&&price>=v[s.top()])
        {
            s.pop();
        }
        int res=s.empty()?i+1:i-s.top();
        s.push(i++);
        return res;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */