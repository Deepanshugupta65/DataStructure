#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;
    // constructor
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


void buildlevelOrderTraversal(node* &root){
    queue<node*>q;
    cout<<"Enter the root data "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
    node* temp = q.front();
    q.pop();
    cout<<"enter the leftnode data "<<temp->data<<endl;
    int leftdata;
    cin>>leftdata;
    if(leftdata!=-1){
        temp->left = new node(leftdata);
        q.push(temp->left);
    }
    cout<<"enter the rightnode data "<<temp->data<<endl;
    int rightdata;
    cin>>rightdata;
    if(rightdata!=-1){
        temp->right = new node(rightdata);
        q.push(temp->right);
    }
    }
}

 void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL); 
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){ 
                q.push(temp->right);
            }
        }
    }

 }

int main(){
    node* root;
    // level order traversal
    //  3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
        // root = buildTree(root);
    buildlevelOrderTraversal(root);
    cout<<"enter the level order traversal output"<<endl;
    levelOrderTraversal(root);
  
 return 0; 
}