#include <algorithm>
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         int list[26] = {};
        int res = words.size();
        for(char c: allowed) list[c - 'a']++;

        for(auto word: words) {
            for(char c: word) {
                if(list[c - 'a'] == 0) {
                    res--;
                    break;
                } 
            }
        }
        return res;
    }
};