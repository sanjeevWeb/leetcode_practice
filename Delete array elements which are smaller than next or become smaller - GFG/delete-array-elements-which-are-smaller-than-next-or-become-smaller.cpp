//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> deleteElement(int arr[],int n,int k);

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        vector<int> v;
        
        v = deleteElement(arr,n,k);
        vector<int>::iterator it;
         for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        
    }
return 0;
}

// } Driver Code Ends


vector<int> deleteElement(int arr[],int n,int k)
{
    // complete the function
    stack<int> st;
    int cnt = 0;
    // st.push(arr[0]);
    for(int i=0;i<n;i++){
        while(!st.empty() && cnt < k && st.top() < arr[i]){
            st.pop();
            cnt++;
        }
        st.push(arr[i]);
    }
    int m = st.size();
    // vector<int> ans(m);
    vector<int> ans;
    // vector<int> v(m); // Size of vector is m
    while (!st.empty()) {
         
        // push element from stack to vector v
        // ans[--m] = st.top();
        // st.pop();
        int val = st.top();
        ans.push_back(val);
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
