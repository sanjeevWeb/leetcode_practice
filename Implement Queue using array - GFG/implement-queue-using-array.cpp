//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
};

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }

// } Driver Code Ends


/* 

The structure of the class is
class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */

//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        // Your Code
        if(rear == 100005 - 1){
            return;
        }
        else if(front == 0 && rear == 0){
            front++;
            rear++;
            arr[rear] = x;
        }
        else{
            rear++;
            arr[rear] = x;
            
        }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code  
        if(rear == 0 && front == 0){
            return -1;
        }
        else if(front == rear){
            int x = arr[front];
            front = rear = 0;
            return x;
        }
        else{
            int num = arr[front];
            front++;
            return num;
            
        }
}
