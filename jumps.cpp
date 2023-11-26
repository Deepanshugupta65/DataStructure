#include<iostream>
using namespace std;

// make a class
class Node{
    public:
    int data;
    Node* next;
    // constractor
    Node(int data){
        this ->data = data;
        this -> next = NULL;
    }
};

// insertion at head
void insertathead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}


void insertattail(Node* &tail,int d){
    Node* temp1 = new Node(d);
    tail->next = temp1;
    tail =tail -> next;
}

void insertatposition(Node* &head, int position, int data){
    // for 1st psotion
    if(position == 1){
        insertathead(head,data);
        return;
    }
    Node* curr = head;
    int cnt = 1;
    while(cnt < position -1){
        curr = curr->next;
        cnt++;
    }
    Node* temp = new Node(data);
    temp ->next = curr->next;
    curr -> next = temp;
}
void print(Node* &head){
   Node* temp = head;
   while(temp!= NULL){
    cout<<temp->data<<endl;
    temp = temp -> next;
   }
}

// delete the node of the linked list
void deleteNode(Node* &head,int position){
      if(position == 1){
  Node* temp = head;
  head = head -> next;
  // memeory free start node 
  temp -> next = NULL;
  delete temp;
  }
    int cnt = 1;
    Node* temp = head;
    Node* curr = NULL;
    while(cnt < position){
        curr = temp;
        temp = temp -> next;
        cnt++;
    }
     curr -> next = temp -> next;
     delete temp;     
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    // insertathead(head,5);
    insertattail(tail,20);
    insertattail(tail,30);
    insertatposition(head,2,15);
    insertatposition(head,1,40);
    deleteNode(head,5);
    print(head);
}