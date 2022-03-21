// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
   static bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {
   if(p1.first==p2.first) return p1.second<=p2.second;
        else return p1.first>p2.first;
   }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        map<int, int> mp;
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto m: mp){
            v.push_back({m.second, m.first});
        }
        sort(v.begin(), v.end(), comp);
        vector<int> ans;
        for(auto p: v){
            int k=p.first;
            while(k--)ans.push_back(p.second);
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends