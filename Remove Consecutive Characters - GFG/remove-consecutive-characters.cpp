//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string str = S;
        string temp = "";
        for(int i=0;i<str.size();i++){
            if(i == 0){
                temp += str[i];
            }
            else if(str[i] == str[i-1]){
                // str.erase(str.begin()+i);
                
                continue;
            }
            else{
                temp += str[i];
            }
        }
        return temp;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends