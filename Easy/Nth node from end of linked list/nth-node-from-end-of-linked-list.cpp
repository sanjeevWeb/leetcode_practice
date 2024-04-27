//{ Driver Code Starts
//Initial Template for C++
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:

int length(Node* &head){
    int len=0;
    if(head==NULL)
    return len;
    else{
        Node* curr=head;
        while(curr!=NULL){
            len++;
            curr=curr->next;
        }
    }
    return len;
    
}

    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           if(head==NULL)
           return -1;
           
           int len=length(head);
           if(len<n)
           return -1;
           
           int pos=len-n;
          // cout<<pos;
           
           Node* t=head;
           for(int i=1;i<=pos;i++){
               t=t->next;
           }
           return t->data;
           
    }
};




//{ Driver Code Starts.

int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
    cout<<obj.getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends