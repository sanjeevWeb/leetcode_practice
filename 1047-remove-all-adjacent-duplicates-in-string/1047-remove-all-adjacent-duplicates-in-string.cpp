class Solution {
public:
    string removeDuplicates(string s) {
//         string str = s;
//         stack<char> st;
        
//         for(int i=0;i<str.size();i++){
            
//             if(st.empty()){
//                 st.push(s[i]);
//             }
//             else{
//                 st.push(s[i]);
//                 if(st.top() == str[i+1]){
//                     st.pop();
//                     str.erase(i,2);
//                     // i=0;
//                 }
//             }
//         }
//         return str;
        string ans;

    for (const char c : s)
      if (!ans.empty() && ans.back() == c)
        ans.pop_back();
      else
        ans.push_back(c);

    return ans;
    }
};