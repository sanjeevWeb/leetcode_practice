class Solution {
public:
    string removeOuterParentheses(string s) {
        string str = "";
        stack<int>st;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                if(st.size() > 0){
                    str += "(";
                }
                st.push(s[i]);
            }
            else{
                if(st.size() > 1){
                    str += ')';
                }
                st.pop();
            }
        }
        return str;
    }
};