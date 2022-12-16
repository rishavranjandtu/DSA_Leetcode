class MyQueue {
public:
    stack<int>a;
  stack<int>b;
    MyQueue() {
        
    }
    
    void push(int x) {
      while(!a.empty())
      {
        b.push(a.top());
        a.pop();
      }
      a.push(x);
      while(!b.empty())
      {
        a.push(b.top());
        b.pop();
      }
        
    }
    
    int pop() {
      int f=a.top();
      a.pop();
      return f;
        
    }
    
    int peek() {
      return a.top();
        
    }
    
    bool empty() {
        return a.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */