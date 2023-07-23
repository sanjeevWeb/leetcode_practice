//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        // n++;
        // int total = n*(n+1)/2;
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum += array[i];
        // }
        // int ans = total-sum;
        // return ans;
        int m = array.size() + 1;
 
    // get a sum of integers between 1 and `n+1`
    int total = m*(m + 1)/2;
 
    // get an actual sum of integers in the array
    int sum = 0;
    for (int i = 0; i < array.size(); i++) {
        sum += array[i];
    }
 
    // the missing number is the difference between the expected sum
    // and the actual sum
    return total - sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends