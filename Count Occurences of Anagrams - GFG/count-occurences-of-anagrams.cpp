//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
 //freq of b
 //sliding window for a
 //if size==k
 //if freq ok window k=freq of b c++
 //remoce the ith comp
	int search(string pat, string txt) {
	    // code here
	    vector<int>a(26,0);
	    vector<int>b(26,0);
	    int k=pat.size();
	    for(int i=0;i<k;i++)
	    {
	        a[pat[i]-'a']++;  
	    }
	    //for(auto x:a) cout<<x;
	    int i=0;
	    int j=0;
	    int n=txt.size();
	    int ans=0;
	    while(j<n)
	    {
	        b[txt[j]-'a']++;
	        if(j-i+1<k) j++;
	        else if(j-i+1==k)
	        {
	            //cout<<j<<endl;
	            if(a==b) ans++;
	            b[txt[i++]-'a']--;
	            j++;
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends