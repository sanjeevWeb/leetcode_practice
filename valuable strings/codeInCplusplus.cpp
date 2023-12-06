//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
    private:
        int difference(string str){
            int vowel_cnt = 0, conso_cnt = 0;
            for(char ch : str){
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                    vowel_cnt++;
                }
                else{
                    conso_cnt++;
                }
            }
            int diff = abs(conso_cnt - vowel_cnt);
            return diff;
        }
  public:
    string valuableString(int n, vector<string> &arr) {
        // code here
        string str= "";
        int max_diff = INT_MIN;
        for(int i=0;i<n;i++){
            int diff = difference(arr[i]);
            if(diff > max_diff){
                max_diff = diff;
                str = arr[i];
            }
        }
        return str;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<string> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        string res = obj.valuableString(n, arr);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends
