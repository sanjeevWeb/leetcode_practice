//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
             int n = price.size();
        if (n < 2)
            return 0;

        // Initialize variables to store the maximum profit after the first and second transactions
        int firstBuy = INT_MIN, firstSell = 0;
        int secondBuy = INT_MIN, secondSell = 0;

        // Iterate through the prices to update the maximum profit after each transaction
        for (int i = 0; i < n; ++i) {
            // Update the maximum profit after the second transaction
            secondSell = max(secondSell, secondBuy + price[i]);
            secondBuy = max(secondBuy, firstSell - price[i]);

            // Update the maximum profit after the first transaction
            firstSell = max(firstSell, firstBuy + price[i]);
            firstBuy = max(firstBuy, -price[i]);
        }

        // Return the maximum profit after the second transaction
        return secondSell;
    }
        
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends