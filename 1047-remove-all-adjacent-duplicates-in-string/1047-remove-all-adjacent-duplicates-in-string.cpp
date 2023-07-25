class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }
            else if(!st.empty() and st.top() == ch){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string temp;
        while(!st.empty()){
            char ch = st.top();
            temp = ch + temp;
            st.pop();
        }
        return temp;
    }
};