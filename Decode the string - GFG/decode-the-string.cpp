//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        // string str = "";
        // string temp = "";
        
        // stack<char> st;
        // for(char ch : s){
        //     if(st.empty()){
        //         st.push(ch);
        //     }
        //     else{
        //         if(ch == ']' && !st.empty()){
        //             while(st.top() != '['){
        //                 char c = st.top();
        //                 temp = c + temp;
        //                 st.pop();
                        
        //             }
        //             st.pop();
        //             int num = st.top() - '0';
        //             st.pop();
        //             int i=0;
        //             while(i<num){
        //                 str += temp;
        //                 i++;
        //             }
        //         }
        //         else{
        //             st.push(ch);
        //         }
        //     }
        // }
        // return reverse(str.begin(),str.end());
        stack<string> chars;
        stack<int> nums;
        string res;
        int num = 0;
        for(char c : s) {
            if(isdigit(c)) {
                num = num*10 + (c-'0');                              
            }
            else if(isalpha(c)) {
                res.push_back(c);                
            }
            else if(c == '[') {
                chars.push(res);
                nums.push(num);
                res = "";
                num = 0;
            }
            else if(c == ']') {
                string tmp = res;
                for(int i = 0; i < nums.top()-1; ++i) {
                    res += tmp;
                }
                res = chars.top() + res;
                chars.pop(); nums.pop();
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends