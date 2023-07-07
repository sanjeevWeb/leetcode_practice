//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
        string makeReverse(string temp){
            int i=0;
            int j = temp.size()-1;
            while(i<=j){
                swap(temp[i],temp[j]);
                i++;
                j--;
            }
            return temp;
        }
  public:
    string reverseEqn (string s)
        {
            //code here.
            // for(int i=0;i<s.size();i++){
            //     int j = i;
            //     string temp = "";
            //     while(s[j] >= '0' && s[j] <= '9'){
            //         temp += s[j];
            //         j++;
            //     }
            //     makeReverse(temp);
            //     i = j;
            // }
            // stack<char> st;
            // for(int i=0;i<s.size();i++){
            //     st.push(s[i]);
            // }
            // string ans = "";
            // while(!st.empty()){
            //     ans += st.top();
            //     st.pop();
            // }
            // return ans;
            string result;
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
         
        // A space marks the end of the word
        if (s[i] == '+' || s[i] == '-' ||
            s[i] == '/' || s[i] == '*') {
             
            // insert the word at the beginning
            // of the result string
            result.insert(result.begin(),
                s.begin() + j, s.begin() + i);
            j = i + 1;
             
            // insert the symbol
            result.insert(result.begin(), s[i]);
        }
    }
     
    // insert the last word in the string
    // to the result string
    result.insert(result.begin(), s.begin() + j,
                                     s.end());
    return result;
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
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends