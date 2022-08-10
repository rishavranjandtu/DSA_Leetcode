class node{
    public:
    int key;
    int val;
    node*next;
    node*prev;
    node(int k, int v)
    {
        key=k;
        val=v;
    }
    friend class LRUCache;
};

class LRUCache {
public:
    node*head=new node(-1,-1);
    node*tail=new node(-1,-1);
    unordered_map<int,node*> m;
    int cap;
        LRUCache(int capacity) {
        cap=capacity;
            head->next=tail;
            tail->prev=head;
    }
    
    
    void addnode(node*n)
    {
        node*tmp=head->next;
        n->next=tmp;
        n->prev=head;
        head->next=n;
        tmp->prev=n;
    }
    
    void deletenode(node* n)
    {
        node*t=n->prev;
        node*p=n->next;
        t->next=p;
        p->prev=t;
    }
    int get(int key) {
        if(m.find(key)!=m.end())
        {
            node*n=m[key];
            int e=n->val;
            deletenode(n);
            addnode(n);
            m[key]=head->next;
            return e;
        }
        else
        {
            return -1;
        }
        
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
            node*n=m[key];
            deletenode(n);
            m.erase(key);
        }
        if(m.size()==cap)
        {
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        node*g=new node(key,value);
            addnode(g);
            m[key]=head->next;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */