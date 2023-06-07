class Solution {
public:
    int minFlips(int a, int b, int c) {
        vector<int>aa;
      vector<int>bb;
      vector<int>cc;
      
      while(a>0)
      {
        aa.push_back(a&1);
        a=a>>1;
      }      
      while(b>0)
      {
        bb.push_back(b&1);
        b=b>>1;
      }
      while(c>0)
      {
        cc.push_back(c&1);
        c=c>>1;
      }
      int n=cc.size();
      int f=aa.size();
      int g=bb.size();
      int maxx=max(f,g);
      int maxxx=max(maxx,n);
      for(int i=f;i<maxxx;i++) aa.push_back(0);
      for(int i=g;i<maxxx;i++) bb.push_back(0);
       for(int i=n;i<maxxx;i++) cc.push_back(0);
      int ans=0;
      for(int i=0;i<maxxx;i++)
      {
      //  cout<<(aa[i]|bb[i])<<endl;
        if((aa[i]|bb[i])==0&&cc[i]==1) {ans+=1;}
        else if((aa[i]|bb[i])==1&&cc[i]==0)
        {
          if(aa[i]==1&&bb[i]==1) {ans+=2;}
          else ans+=1;
        }
      }
     
      return ans;
    }
};