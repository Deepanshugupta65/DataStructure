//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        Node* list1 = NULL;
        Node* list2 = NULL;
        Node* list1left = NULL;
        Node* list2left = NULL;
        
        if(head ==NULL) return {NULL , NULL};
        Node* curr = head;
        
        bool toggle = true;
        while(curr!=NULL){
            if(toggle){
                if(list1==NULL){
                    list1 = new Node(curr->data);
                    list1left = list1;
                }
                else{
                    list1left -> next = new Node(curr->data);
                    list1left = list1left->next;
                }
                
            }
            else{
                if(list2==NULL){
                    list2 = new Node(curr->data);
                    list2left = list2;
                }
                else{
                     list2left -> next = new Node(curr->data);
                    list2left = list2left->next;
                }
            }
            toggle = !toggle;
            curr = curr -> next;
        }
        return {list1,list2};
    }
};


//{ Driver Code Starts.

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        vector<Node*> result = ob.alternatingSplitList(head);
        printList(result[0]);
        printList(result[1]);
    }

    return 0;
}

// } Driver Code Ends