//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        // int i=0;
        // int j=n-1;
        // while(i<=j){
        //     if(arr[i] > 0 && arr[j] > 0){
        //         i++;
                
        //     }
        //     else if(arr[i] < 0 && arr[j] > 0){
        //         swap(arr[i],arr[j]);
        //         i++;
        //         j--;
            
        //     }
        //     else if(arr[i] < 0 && arr[j] < 0){
        //         j--;
        //     }
            
        // }
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(arr[i] > 0){
                temp.push_back(arr[i]);
            }
        }
        
        if(temp.size() == n) return;
        
        for(int i=0;i<n;i++){
            if(arr[i] < 0){
                temp.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = temp[i];
        }
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
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
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends