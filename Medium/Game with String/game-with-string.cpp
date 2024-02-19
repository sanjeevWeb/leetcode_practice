//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char, int> freq;

    // Count the frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    // Store the frequencies in a vector
    vector<int> counts;
    for (auto& pair : freq) {
        counts.push_back(pair.second);
    }

    // Sort the frequencies in descending order
    sort(counts.begin(), counts.end(), greater<int>());

    // Remove k characters with the highest frequency
    for (int i = 0; i < k; i++) {
        if (counts.empty()) {
            break;
        }
        counts[0]--;
        if (counts[0] == 0) {
            counts.erase(counts.begin());
        }
        sort(counts.begin(), counts.end(), greater<int>());
    }

    // Calculate the minimum value after removal
    int minValue = 0;
    for (int count : counts) {
        minValue += count * count;
    }

    return minValue;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends