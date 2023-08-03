//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        // int n = arr.size();
    vector<pair<int, int>> arrWithIndices;

    // Store the element with its original index in a pair
    for (int i = 0; i < n; ++i) {
        arrWithIndices.push_back(make_pair(arr[i], i));
    }

    // Sort the array based on the elements, but use the original indices to find distance
    sort(arrWithIndices.begin(), arrWithIndices.end());

    for (int i = 0; i < n; ++i) {
        int originalIndex = arrWithIndices[i].second;
        if (abs(originalIndex - i) > k) {
            return "No";
        }
    }
    return "Yes";
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
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends