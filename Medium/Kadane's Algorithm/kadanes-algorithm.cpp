//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long currentSum = arr[0];
        long maxSum = arr[0];
        
        for(int i = 1; i < n ; i++){
            if (currentSum < 0) {
                currentSum = 0;
            }
            currentSum += arr[i];
            maxSum = max(currentSum,maxSum);
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        // Your code here
        return maxSum;
        
    }
};



//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends