//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        // Complete the function
        int j=0;
        int dummyArr[n] = {0};
        for(int i=n-1;i>=0;i--){
            dummyArr[j] = a[i];
            j++;
        }
        
        for(int i=0;i<n;i++){
            if(dummyArr[i] != a[i]){
                return false;
            }
        }
        
        return true;
    }
};




//{ Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}
// } Driver Code Ends