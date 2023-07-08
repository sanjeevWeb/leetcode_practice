//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    // code here
    vector<string> out;

    for(int i=0;i<s.size();i++)
    {
        string S="";
        if(s[i]>=48 && s[i]<=57)
        {
        while(s[i]>=48 && s[i]<=57)
        {
            S=S+s[i];
            i++;
        }
        out.push_back(S);
        }
    }
    return out;
}