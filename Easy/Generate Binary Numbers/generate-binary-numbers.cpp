//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.

vector<string> generate(int N)
{
	// Your code here
// 	vector<string> ans;
// 	int i = 1;
// 	while(i<=N){
// 	    string temp = dectobin(i);
// 	    ans.push_back(temp);
// 	}
// 	return ans;
	vector<string> ans;
	for(int i=1;i<=N;i++){
	    string str = "";
	    int num = i;
	    while(num != 0){
	        int rem = num%2;
	        str += to_string(rem);
	        num = num/2;
	    }
	   
	   int k = 0,l = str.size() - 1;
	   while(k<=l){
	       swap(str[k],str[l]);
	       k++;
	       l--;
	   }
	    ans.push_back(str);
	}
	return ans;
}



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends