//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        vector<int> dup;
        map<int, int> mp;
        
        for (int i = 0; i < n; i++)
            mp[arr[i]]++;
        
        for (auto x : mp) {
            if (x.second > 1)
                dup.emplace_back(x.first);
        }
        
        if (dup.size() < 1) dup.push_back(-1);
        
        return dup;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends