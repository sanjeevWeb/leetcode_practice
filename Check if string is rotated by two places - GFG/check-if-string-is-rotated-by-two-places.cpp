//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1 == str2) return true;
        string temp = "";
        for(int i=0;i<2;i++){
            temp += str1[i];
        }
        string ans = "";
        for(int i=2;i<str1.size();i++){
            ans += str1[i];
        }
       
        ans = ans + temp;
        
        string ans_right = "";
        int n = str1.size();
        for(int i=n-2;i<n;i++){
            ans_right += str1[i];
        }
        
        for(int i=0;i<n-2;i++){
            ans_right += str1[i];
        }
        if(ans == str2 or ans_right == str2){
            return true;
        }
        return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends