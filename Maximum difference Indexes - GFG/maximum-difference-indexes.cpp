//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int maxDiffIndex(int A[], int N)
    {
        // int gap;
        // int maxi = -1;
        // for(int i=0;i<N;i++){
        //     for(int j=0;j<N;j++){
        //         if(A[i] == A[j]){
        //             gap = j - i;
        //         }
        //         // else{
        //         //     gap = 0;
        //         // }
        //     }
        //     if(gap > maxi){
        //         maxi = gap;
        //     }
        // }
        // return maxi;
        unordered_map<int, int> indexMap;
    int maxGap = 0;

    for (int i = 0; i < N; i++) {
        if (indexMap.find(A[i]) == indexMap.end()) {
            indexMap[A[i]] = i;
        } else {
            maxGap = max(maxGap, i - indexMap[A[i]]);
        }
    }

    return maxGap;
    }
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends