//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int,int>umap;
        
        for(int i=0;i<n;i++){
            umap[arr[i]]++;
        }
        vector<int>vec;
        for(auto it : umap){
            if(it.second > 1){
                vec.push_back(it.first);
            }
        }
        
        if(vec.size() == 0) vec.push_back(-1);
        sort(vec.begin(),vec.end());
        return vec;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends