class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        // int count = 0;
        int max = 0;
        for(int i=0;i<sentences.size();i++){
            int count = 0;
            for(char c : sentences[i]){
                if(c == ' ') count++;
            }
            // for(int j=0;j<sentences[i].size();j++){
            //     if(sentences[i][j] == ' '){
            //         count++;
            //     }
            // }
            if(count > max){
                max = count;
            }
            
        }
        return (max+1);
    }
};