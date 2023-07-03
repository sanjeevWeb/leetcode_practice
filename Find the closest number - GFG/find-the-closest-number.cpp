//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        // int min = INT_MAX,diff,element;
        // for(int i=0;i<n;i++){
        //     diff = abs(arr[i] - target);
        //     if(diff <= min){
        //         min = diff;
        //         element = arr[i];
        //     }
        // }
        // return element;
        
        if(target < arr[0]){
            return arr[0];
        }
        if(target > arr[n-1]) return arr[n-1];
        
        //---------apply BS for the rest----------
        int left = 0;
        int right = n-1;
        while(left <= right){
            int mid = left + (right - left)/2;
            
            if(arr[mid] == target){
                 return arr[mid];
            }
            else if(arr[mid] > target){
                if(arr[mid-1] <= target && arr[mid] > target){
                    int diff1 = abs(arr[mid] - target);
                    int diff2 = abs(arr[mid-1] - target);
                    if(diff1 > diff2){
                        return arr[mid-1];
                    }
                    else{
                        return arr[mid];
                    }
                }
                right = mid - 1;
            }
            else{
                if(arr[mid] < target && arr[mid + 1] > target){
                    int diff1 = abs(arr[mid] - target);
                    int diff2 = abs(arr[mid+1] - target);
                    if(diff1 >= diff2){
                        return arr[mid+1];
                    }
                    else{
                        return arr[mid];
                    }
                }
                left = mid+1;
            }
        }
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends