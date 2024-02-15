//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        vector<int>ans;
        unordered_map<long long,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        bool check=false;
        for(auto &i : mp){
            if(i.second > 1){
                ans.push_back(i.first);
                check = true;
            }
        }
        sort(ans.begin(),ans.end());
        if(check){
            return ans;
        }
        return {-1};
        
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