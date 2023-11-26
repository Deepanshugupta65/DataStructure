// #include<iostream>
// using namespace std ;
// class node {
//     public:
//     int data;
//     node *next;
//     node (int data){
//         this ->data =data;
//         next = NULL;
//     }
// };
// void print(node *head){
//     node *temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp -> next;
//         }
//     }
// int main(){
//     node n1(1);
//     node n2(2);
//     node n3(3);
//     node n4(4);
//     node n5(5);

//     n1.next= &n2;
//     n2.next= &n3;
//     n3.next = &n4;
//     n4.next = &n5;
//     node *head = &n1;
//     print(head);
// }


// #include<iostream>
// using namespace std ;
// class node {
//     public:
//     int data;
//     node *next;
//     node (int data){
//         this ->data =data;
//        this -> next = NULL;
//     }
// };
// void print(node *head){
//     node *temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp -> next;
//         }
//         cout<<endl;
//     }
// int main(){
//     node *node1 = new node(10);
//     node *node2 = new node(20);
//     node *node3 = new node(20);
//     node *node4 = new node(20);
//     node1 -> next =node2;
//     node2-> next =node3;
//     node3-> next = node4;
//     print(node2);
// }


/* singly linked list how  to print list */
/*
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
void print(node *head){
    while(head != NULL){
        cout<<head-> data<<" ";
        head=head->next;
    }
}
int main(){
    node *head= takeInput();
    print(head);
}
*/

/*length o linked list*/
/*#include<iostream>
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

int getcount (node* head)
{
    int count =0;
    node *temp = head;
    while (temp !=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main(){
    node *head= takeInput();
    cout<<getcount(head)<<endl;
}
*/

/* print i node of  data*/
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
int valuefor(node* head, int i){
int count=0;
node *temp = head;
while(count !=i){
    temp = temp->next;
    count++;
}
int a = temp->data;
return a;
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
    cout<<valuefor(head,i)<<endl;
}
