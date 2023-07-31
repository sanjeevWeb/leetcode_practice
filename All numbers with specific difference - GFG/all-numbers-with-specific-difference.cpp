//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long  long sum(long long mid)
    {
        long long  c=0;
        while(mid>0)
        {
            c+=mid%10;
            mid/=10;
        }
        return c;
    }
    long long getCount(long long N , long long D) 
    {
        long long s=1,e=N;
        long long mid=s+(e-s)/2;
        while(s<=e)
        {
            if(mid-sum(mid)<D)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return N-e;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N,D;

        cin>>N>>D;

        Solution ob;
        cout << ob.getCount(N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends