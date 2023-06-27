//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int n = x.size();
        int i = 0;
        stack<int> st;
        while(i<n){
            if(st.empty()){
                st.push(x[i]);
            }
            else{
                if((st.top() == '{' && x[i] == '}') ||
                  (st.top() == '[' && x[i] == ']') ||
                  (st.top() == '(' && x[i] == ')')){
                      st.pop();
                  }
                else if(st.top() != x[i] || st.top() == x[i]){
                  st.push(x[i]);
                }
            }
            i++;
        }
        if(st.empty()){
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends