class Solution {
public:
    int maxDepth(string s) {
        // stack<int> st;
        // int cnt = 0;
        // int i=0;
        // while(i<s.size()){
        //     if(s[i] == '('){
        //         st.push(s[i]);
        //     }
        //     else if(s[i] == ')'){
        //         while(!st.empty()){
        //             if(st.top() == '(' && s[i] == ')'){
        //                 cnt++;
        //                 st.pop();
        //             }
        //             st.push(s[i]);
        //         }
        //     }
        //     i++;
        // }
        // return cnt;
        
        int ans = 0,k=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                k++;
            }
            else if(s[i] == ')'){
                k--;
            }
            ans = max(ans,k);
        }
        return ans;
    }
};