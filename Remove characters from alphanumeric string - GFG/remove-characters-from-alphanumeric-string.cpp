//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	string removeCharacters(string s) 
	{
	    // Your code goes here
	    string str = "";
	    for(int i=0;i<s.size();i++){
	        if(s[i] >= '0' && s[i] <= '9'){
	            str += s[i];
	        }
	       // if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
	       //     str += s[i];
	       // }
	    }
	    return str;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeCharacters(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends