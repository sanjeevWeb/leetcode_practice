//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        // code here 
        int i = 0;
        int n = S.size();
        vector<string> output;
        string chr_str = "";
        string num_str = "";
        string spl_str = "";
        while(i<n){
            if((S[i] >= 'a' && S[i] <= 'z') || (S[i] >= 'A' && S[i] <= 'Z')){
                chr_str += S[i];
            }
            else if(S[i] >= '0' && S[i] <= '9'){
                num_str += S[i];
            }
            else{
                spl_str += S[i];
            }
            i++;
        }
        output.push_back(chr_str);
        output.push_back(num_str);
        output.push_back(spl_str);
        return output;
    } 
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 


// } Driver Code Ends