class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>s;
      for(int i=0;i<wordList.size();i++)
      {
        s.insert(wordList[i]);
      }
      queue<pair<string,int>>q;
      q.push({beginWord,0});
      s.erase(beginWord);
      while(!q.empty())
      {
        string a=q.front().first;
        int c=q.front().second;
        q.pop();
        if(a==endWord) return c+1;
        for(int i=0;i<a.size();i++)
        {
          char z=a[i];
          for(char h='a';h<='z';h++)
          {
            a[i]=h;
            if(s.find(a)!=s.end())
            {
              q.push({a,c+1});
              s.erase(a);
            }
          }
          a[i]=z;
        }
      }
      return 0;
    }
};