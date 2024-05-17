//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        // if(x==0){
        //     return -1;
        // }
        // sort(arr.begin(),arr.end());
        // int i=0;
        // int j=1;
        // while(j<n){
        //     int diff = abs(arr[j] - arr[i]);
        //     if(diff == x){
        //         return 1;
                
        //     }
        //     else  if(diff < x){
        //         j++;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return -1;
        
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(abs(arr[i] - arr[j]) == x){
        //             return 1;
        //         }
        //     }
        // }
        // return -1;
        sort(arr.begin(),arr.end());
        set<pair<int,int>> ans;
        int i=0,j=1;
        while(j<arr.size()){
            int diff = abs(arr[j]-arr[i]);
            if(diff==x){
                return 1;
            }
            else if(diff>x){
                i++;
            }
            else{
                j++;
            }
            if(i==j) j++;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        vector<int> arr(n);
        Array::input(arr, n);

        Solution obj;
        int res = obj.findPair(n, x, arr);

        cout << res << endl;
    }
}

// } Driver Code Ends