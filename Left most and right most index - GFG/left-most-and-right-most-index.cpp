//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int low=0;
        int high=v.size()-1;
        int firstIndex = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(v[mid] == x){
                firstIndex = mid;
                high = mid-1;
            }
            else if(v[mid] > x){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        low = 0; 
        high = v.size()-1;
        int lastIndex = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(v[mid] == x){
                lastIndex = mid;
                low = mid+1;
            }
            else if(v[mid] > x){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        pair<int,int>pr;
        pr.first = firstIndex;
        pr.second = lastIndex;
        return pr;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends