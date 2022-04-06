// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>>v1;   
       if(arr.size()<=3)
           return v1;
       sort(arr.begin(),arr.end());
       set<vector<int>>s;
       for(int i=0;i<arr.size()-2;i++)
       {
           for(int j=i+1;j<arr.size()-1;j++)
           {
               int l=j+1,n=arr.size()-1;
               while(l<n)
               {
                   if((arr[i]+arr[j]+arr[l]+arr[n])==k)
                   {
                       s.insert({arr[i],arr[j],arr[l],arr[n]});
                       l++;
                   }
                   else if((arr[i]+arr[j]+arr[l]+arr[n])<k)
                   {
                       l++;
                   }
                   else
                   n--;
               }
           }
       }
       for(auto x:s)
       {
           v1.push_back(x);
       }
       return v1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends