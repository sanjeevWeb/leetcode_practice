//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        // if(n == 1) return arr[0];
        // if(n == 2) return max(arr[0],arr[1]);
        
        // int even_sum = 0,odd_sum = 0;
        // for(int i=0;i<n;i=i+2){
        //     odd_sum += arr[i];
        // }
        
        // for(int i=1;i<n;i=i+2){
        //     even_sum += arr[i];
        // }
        // int ans = max(odd_sum,even_sum);
        // return ans;
        if (n == 0) {
        return 0;
        }
        if (n == 1) {
            return arr[0];
        }
        vector<int> dp(n + 1, 0);
        dp[1] = arr[0];
        for (int i = 2; i <= n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + arr[i - 1]);
        }
        return dp[n];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends