class Solution {
    private:
      bool isAlphanumeric(char ch){
          if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return true;
          }
          return false;  
      }

      char isLowerCase(char c){
          if((c>='a' && c<='z') || (c>='0' && c<='9')){
              return c;
          }
          else{
              return (char((int)c + 32));
          }
      }
public:
    bool isPalindrome(string s) {
        int i=0;
        // int n=s.length();
        int j=s.length()-1;
        while(i<=j){
            if(!isAlphanumeric(s.at(i))){
                i++;
            }
            else if(!isAlphanumeric(s.at(j))){
                j--;
            }
            else if(isLowerCase(s.at(i)) != isLowerCase(s.at(j))){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
