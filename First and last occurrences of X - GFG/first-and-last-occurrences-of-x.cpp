//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int first = -1;
        int last = -1;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i] == x){
                if(first == -1){
                    first = i;
                    ans.push_back(first);
                }
                
                    last = i;
                
            }
            // if(arr[i] > x && last == -1){
            //     last = i-1;
            // }
        }
        
        if(first != -1){
            ans.push_back(last);
            return ans;
        }
        ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends