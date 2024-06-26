//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
     string cmmonPrefix(string s1, string s2){
        int minLen = min(s1.size(),s2.size());
        string str = "";
        for(int i=0;i<minLen;i++){
            if(s1[i] == s2[i]){
                str += s1[i];
            }
            else {
                return str;
            }
        }
        return str;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        if(N == 1){
            return arr[0];
        }
        string st = arr[0];
        for(int i=1;i<N;i++){
            st = cmmonPrefix(st,arr[i]);
        }
        if(st.size() >= 1){
            
            return st;
        }
        return "-1";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends