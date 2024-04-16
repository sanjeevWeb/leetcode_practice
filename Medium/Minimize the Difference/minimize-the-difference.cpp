//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        vector<pair<int,int>> left(n);
        vector<pair<int,int>> right(n);
        int mini=INT_MAX;
        int maxi=INT_MIN;
        left[0]={mini,maxi};
        for(int i=0;i<arr.size()-1;i++){
            mini=min(arr[i],mini);
            maxi=max(arr[i],maxi);
            left[i+1]={mini,maxi};
        }
        mini=INT_MAX;
        maxi=INT_MIN;
        right[n-1]={mini,maxi};
        for(int i=arr.size()-1;i>0;i--){
            mini=min(arr[i],mini);
            maxi=max(arr[i],maxi);
            right[i-1]={mini,maxi};
        }
        int i=0;
        int j=k-1;
        int ans=INT_MAX;
        while(j<n){
            int temp_min=min(left[i].first,right[j].first);
            int temp_max=max(left[i].second,right[j].second);
            ans=min(ans,temp_max-temp_min);
            i++;
            j++;
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends