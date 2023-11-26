/*#include <bits/stdc++.h>    // node insert at i th nposurt
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node* takeinput_better(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else {

                tail -> next = newNode;
                tail = tail->next;
         }
        cin>>data;
    }
    return head;
}


Node* insertNode(Node *head,int i,int data){
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp=head;

    if(i==0){
       newNode -> next = head;
       head = newNode;
       return head;
    }
    while(temp != NULL && count<i-1){
        temp=temp->next;
        count++;
    }
    if(temp != NULL){
        Node *a = temp->next;
        temp -> next = a;
    }
    return head;
}
void printList(Node* head){
   
    while (head != NULL){
    cout << head->data<<" ";
    head = head->next;
    }
}

int main() {

    Node *head = takeinput_better();
    printList(head);
    int data,i;
    cin>>i>>data;
    head = insertNode(head,i,data);
    printList(head);
    return 0;
}
*/
// insert at begining node 
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node* takeinput_better(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else {

                tail -> next = newNode;
                tail = tail->next;
         }
        cin>>data;
    }
    return head;
}
Node* insertatbeg(Node *head, int data){

    Node *newNode = new Node(data);
    newNode -> next= head;
    head=newNode;
    return head;
}

void printList(Node* head){
   
    while (head != NULL){
    cout << head->data<<" ";
    head = head->next;
    }
}

int main() {

    Node *head = takeinput_better();
    printList(head);
    int data;
    cin>>data;
    head = insertatbeg(head,data);
    printList(head);
    return 0;
}