class node
{
  public:
  char ch;
  unordered_map<char,node*>m;
  bool ist;
  node(char c)
  {
    ch=c;
    ist=false;
    
  }
};

class Trie {
public:
  node*root;
    Trie() {
      root=new node('/');
        
    }
    
    void insert(string word) {
      node*tmp=root;
      for(char c:word)
      {
        if(tmp->m.count(c)==0)
        {
          node*n=new node(c);
          tmp->m[c]=n;
        }
        tmp=tmp->m[c];
      }
        tmp->ist=true;
    }
    
    bool search(string word) {
      node*tmp=root;
      for(char c:word)
      {
        if(tmp->m.count(c)==0)
        {
          return false;
        }
        tmp=tmp->m[c];
      }
      return tmp->ist;
        
    }
    
    bool startsWith(string prefix) {
      node*tmp=root;
      for(char c:prefix)
      {
        if(tmp->m.count(c)==0)
        {
          return false;
        }
        tmp=tmp->m[c];
      }
      return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */