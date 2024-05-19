//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int closest = INT_MAX;
        int ele;
        for(int i=0;i<n;i++){
            int diff = abs(arr[i] - k);
            if((closest == diff) and (arr[i] > arr[i-1])){
                return arr[i];
            }
            else if(diff < closest){
                closest = diff;
                ele = arr[i];
            }
        }
        return ele;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends