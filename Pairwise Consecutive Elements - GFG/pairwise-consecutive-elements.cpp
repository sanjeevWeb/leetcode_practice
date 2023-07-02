//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s);

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}

// } Driver Code Ends


//User function Template for C++

// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    int size = s.size();
    if(size%2 == 0){
        while(!s.empty()){
            int num1 = s.top();
            s.pop();
            int num2 = s.top();
            s.pop();
            if(abs(num1 - num2 != 1)){
                return false;
            }
        }
    }
    else{
        s.pop();
        while(!s.empty()){
            int num1 = s.top();
            s.pop();
            int num2 = s.top();
            s.pop();
            if(abs(num1 - num2 != 1)){
                return false;
            }
        }
    }
    return true;
}