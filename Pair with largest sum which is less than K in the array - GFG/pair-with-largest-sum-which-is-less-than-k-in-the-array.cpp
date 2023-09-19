//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// arr[]: Input array
// n: Number of elements in the array
// k: Find a pair with sum less than k
pair<int, int> Max_Sum(int arr[], int n, int k) {
    // return the pair
    // pair<int,int>pr;
    // int maxi = INT_MIN;
    // int first=0,last=0;
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int temp = arr[i] + arr[j];
    //         if(temp < k and temp > maxi){
    //             maxi = temp;
    //             first = arr[i];
    //             last = arr[j];
    //         }
    //     }
    // }
    // pr.first = first;
    // pr.second = last;
    // return pr;
    
    // above code throws TLE
    
    int left = 0,right = n-1;
    int ans = INT_MIN;
    int first=0,second=0;
    sort(arr,arr+n);
    while(left < right){
        if(arr[left] + arr[right] < k){
            if(arr[left] + arr[right] > ans){
                ans = arr[left] + arr[right];
                first = arr[left];
                second = arr[right];
            }
            
            left++;
        }
        else{
            right--;
        }
    }
    pair<int,int>pr;
    pr.first = first;
    pr.second = second;
    return pr;
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n + 5];
        for (int i = 0; i < n; i++) cin >> arr[i];
        pair<int, int> p = Max_Sum(arr, n, k);
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}

// } Driver Code Ends