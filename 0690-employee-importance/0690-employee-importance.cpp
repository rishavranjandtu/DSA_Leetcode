/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
      int sum=0;
        int n=employees.size();
      queue<int>q;
      q.push(id);
     map<int,pair<int,vector<int>>>m;
      for(auto x:employees)
      {
        m[x->id]={x->importance,x->subordinates};
      }
     
      while(!q.empty())
      {
       int idd=q.front();
        q.pop();
        sum=sum+m[idd].first;
        vector<int>v=m[idd].second;
        int s=v.size();
        for(int i=0;i<s;i++)
        {
          q.push(v[i]);
        }
      }
      return sum;
    }
};