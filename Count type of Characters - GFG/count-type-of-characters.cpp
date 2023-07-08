//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector<int> ans;
            int up_ch = 0,lo_ch = 0,nu_ch = 0,sp_ch=0;
            
            for(int i=0;i<s.size();i++){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    up_ch++;
                }
                else if(s[i] >= 'a' && s[i] <= 'z'){
                    lo_ch++;
                }
                else if(s[i] >= '0' && s[i] <= '9'){
                    nu_ch++;
                }
                else{
                    sp_ch++;
                }
            }
            ans.push_back(up_ch);
            ans.push_back(lo_ch);
            ans.push_back(nu_ch);
            ans.push_back(sp_ch);
            
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends