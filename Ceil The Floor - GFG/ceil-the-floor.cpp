//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    int l=0;
    int h=n-1;
    int f=-1;
    int c=-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==x)
        {
            f=x;
            c=x;
            break;
        }
        else if(arr[m]<x)
        {
            f=arr[m];
            l=m+1;
        }
        else
        {
            c=arr[m];
            h=m-1;
        }
    }
    return make_pair(f,c);

}