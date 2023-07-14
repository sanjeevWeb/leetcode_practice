//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    string reverseWord(string str){
        int i=0;
        int n=str.size()-1;
        while(i<=n){
            swap(str[i],str[n]);
            i++;
            n--;
        }
        return str;
    }
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int i=0;
        int n = S.size();
        
        string ans = "";
        while(i<n){
            string temp = "";
            while(S[i] == '.' && i<n){
                i++;
            }
            while(S[i] != '.' && i<n){
                temp += S[i];
                i++;
            }
            if(temp.size() > 0){
                if(ans.size() == 0) ans += temp;
                else ans = temp + '.' + ans;
            
            }
            
            // temp = "";
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends