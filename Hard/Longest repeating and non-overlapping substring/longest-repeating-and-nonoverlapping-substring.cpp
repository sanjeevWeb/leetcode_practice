//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string longestSubstring(string s, int n) {
        // code here
            if(n==1) return "-1";
        int LCSRe[n + 1][n + 1];
        memset(LCSRe, 0, sizeof(LCSRe));
    
        string res;
        int res_length = 0;
        int index = 0;
    
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (s[i - 1] == s[j - 1] && LCSRe[i - 1][j - 1] < (j - i)) {
                    LCSRe[i][j] = LCSRe[i - 1][j - 1] + 1;
                    if (LCSRe[i][j] > res_length) {
                        res_length = LCSRe[i][j];
                        index = max(i, index);
                    }
                } else {
                    LCSRe[i][j] = 0;
                }
            }
        }
    
        if (res_length > 0) {
            for (int i = index - res_length + 1; i <= index; i++) {
                res.push_back(s[i - 1]);
            }
        }
    
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends