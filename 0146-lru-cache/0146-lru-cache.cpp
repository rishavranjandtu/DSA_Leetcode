class node
{
  public:
  int key;
  int data;
  node *next;
  node *prev;
  node(int k, int v)
  {
    key=k;
    data=v;
    next=NULL;
    prev=NULL;
  }
};


class LRUCache {
public:
    node*head;
    node*tail;
    unordered_map<int,node*>m;
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
        head=new node(-1,-1);
        tail=new node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    
  
     int del_n(node*b)
     {
       node*a=b->prev;
       int v=b->data;
       a->next=b->next;
       b->next->prev=a;
       return v;
     }
  
    node* add_n(int k, int v)
    {
      node*n=new node(k,v);
      node*b=head->next;
      head->next=n;
      n->next=b;
      b->prev=n;
      n->prev=head;
      return n;
    }
  
    int fun(node*n)
    {
      return n->key;
    }
    int get(int key) {
      int v=-1;
      if(m.find(key)!=m.end())
      {
        node*n=m[key];
         v=del_n(n);
        node *a=add_n(key,v);
        m[key]=a;
      }
        return v;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
          node*n=m[key];
         int v=del_n(n);
        node *a=add_n(key,value);
        m[key]=a;
        }
      else{
        if(m.size()>=cap)
        {
          int k=fun(tail->prev);
          int a=del_n(tail->prev);
          m.erase(k);
        }
      
          node*b=add_n(key,value);
        m[key]=b;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */