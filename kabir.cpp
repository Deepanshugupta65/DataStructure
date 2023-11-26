/* delete node at ith position*/
#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node (int data){
        this ->data =data;
        next = NULL;
    }
};
node *takeInput(){
    int data;
    cin>>data;
    node *head =NULL;
    node *tail =NULL;
    while(data!=-1){
        node *newNode = new node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else {
            tail->next =newNode;
            tail = tail ->next;
        }
        cin>>data;
    }
    return head;
}
node* deletenode(node *head,int i){
    int count = 0;
    node *temp = head;
    node *a = head;
    if(i==0){
        node *temp=head;
        temp=temp->next;
        head=temp;
    }
    while(count<=i-1){
        temp=a;
        a=a->next;
        count++;
    }
    temp->next=a->next;
    delete a;
    return head;
}
void print(node *head){
    while(head != NULL){
        cout<<head-> data<<" ";
        head=head->next;
    }
}

int main(){
    node *head = takeInput();
    print(head);
    int i;
    cin>>i;
    head=deletenode(head,i);
    print(head);
}
/* insertnode at ith postion to a node*/
#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
    node (int data){
        this ->data =data;
        next = NULL;
    }
};
node *takeInput(){
    int data;
    cin>>data;
    node *head =NULL;
    node *tail =NULL;
    while(data!=-1){
        node *newNode = new node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else {
            tail->next =newNode;
            tail = tail ->next;
        }
        cin>>data;
    }
    return head;
}
node *insertnode(node *head,int i,int data){
node *newNode = new node(data);
int count =0;
node *temp = head;
if(i==0){
    newNode -> next =head;
    head = newNode;
    return head;
}
while(temp!=NULL && count<i-1){
    temp = temp->next;
    count++;
}
if(temp != NULL){
    node *a =temp -> next;
    temp->next = newNode;
    newNode->next =a;
}
return head;
}
void print(node *head){
    while(head != NULL){
        cout<<head-> data<<" ";
        head=head->next;
    }
}

int main(){
    node *head = takeInput();
    print(head);
    int i,data;
    cin>>i>>data;
    head=insertnode(head,i,data);
    print(head);
}
