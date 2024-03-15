//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/

class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
          if (!(*head) || !(*head)->next)
            return; // Empty list or single node

        // Count the number of nodes
        int size = 0;
        Node* ptr = *head;
        while (ptr) {
            size++;
            ptr = ptr->next;
        }
    
        // Create an array to store node values
        std::vector<int> arr(size);
        ptr = *head;
        for (int i = 0; i < size; ++i) {
            arr[i] = ptr->data;
            ptr = ptr->next;
        }
    
        // Sort therray
        std::sort(arr.begin(), arr.end());
    
        // Update linked list nodes with sorted values
        ptr = *head;
        for (int i = 0; i < size; ++i) {
            ptr->data = arr[i];
            ptr = ptr->next;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends