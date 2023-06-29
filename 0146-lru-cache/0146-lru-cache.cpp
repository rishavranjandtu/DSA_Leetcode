class node
{
  public:
  int data;
  int key;
  node *next;
  node*prev;
  node(int k,int d)
  {
    key=k;
    data=d;
    next=NULL;
    prev=NULL;
  }
  
};




class LRUCache {
public:
   node *head;
   node*tail;
    int c;
    map<int,node*>m;
    LRUCache(int capacity) {
      c=capacity;
      head=tail=new node(-1,-1);
      head->next=tail;
      tail->prev=head;
      
        
    }
  
    void del(node*n)
    {
      if(n==tail)
      {
        node*a=n->prev->prev;
        a->next=n;
        n->prev=a;
        
      }
      else
      {
        node*a=n->prev;
        a->next=n->next;
        n->next->prev=a;
        
      }
    }
  
    node*add(int k, int v)
    {
      node*n=new node(k,v);
      node*tmp=head->next;
      head->next=n;
      n->next=tmp;
      tmp->prev=n;
      n->prev=head;
      
      return n;
    }
    
    int get(int key) {
      
      if(m.count(key)==0) return -1;
      int f= m[key]->data;
      del(m[key]);
      node*n=add(key,f);
      m[key]=n;
      return f;
    }
    
    void put(int key, int value) {
      
        if(m.count(key)!=0) del(m[key]);
      else if(m.size()>=c) {m.erase(tail->prev->key); del(tail);}
      node*n=add(key,value);
      m[key]=n;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */