// #include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int maxi = 0;
//         int n = prices.size();
//         // int val = 0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(prices[j] > prices[i]){
//                      maxi = max(prices[j] - prices[i],maxi);    
//                 }
                
//             }
//         }
//         // if(max < 0) return 0;
//         return maxi;
//         int maxPro = 0;
//         int n = prices.size();

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (prices[j] > prices[i]) {
//                 maxPro = max(prices[j] - prices[i], maxPro);
//             }
//         }
//     }

//     return maxPro;
        int maxPro = 0;
        int n = prices.size();
        int minPrice = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice);
        }
    
        return maxPro;
    }
};