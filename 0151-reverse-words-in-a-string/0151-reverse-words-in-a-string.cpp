class Solution {
    // private:
    //     string reverse(string ss){
    //         int st = 0;
    //         int end = ss.size()-1;
    //         while(st<end){
    //             swap(ss[st],ss[end]);
    //             st++;
    //             end--;
    //         }
    //         return ss;
    //     }
public:
    string reverseWords(string s) {
//         int i = s.size()-1;
//         string temp = "";
//         string ans = "";
//         while(i>=0){
//             while(i>0 && s[i] == ' '){
//                 i--;
//             }
            
//             while(i>0 && s[i] != ' '){
//                 temp += s[i];
//                 i--;
//             }
//             if(ans.size() == 0) ans += reverse(temp);
//             else ans = ans + " " + reverse(temp);
//                temp = "";
//         }
//         return ans;
        int i=0;
        int n = s.size();
        
        string ans = "";
        while(i<n){
            string temp = "";
            while(s[i] == ' ' && i<n){
                i++;
            }
            while(s[i] != ' ' && i<n){
                temp += s[i];
                i++;
            }
            if(temp.size() > 0){
                if(ans.size() == 0) ans += temp;
                else ans = temp + ' ' + ans;
            
            }
            
            // temp = "";
        }
        return ans;
    }
};