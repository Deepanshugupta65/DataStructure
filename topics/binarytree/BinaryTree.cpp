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
// it is first method and second method is buildfromlevelordertrav-
node* buildTree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1) return NULL;
    cout<<"Enter data for inserting  in left"<<endl;
    root -> left = buildTree(root->left);
    cout<<"enter data for inserting in right"<<endl;
    root -> right = buildTree(root->right);
    return root;
}
// level order traversal it show in tree form  with separator
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
    root = buildTree(root);
    // level order traversal
    //  3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"enter the level order traversal output"<<endl;
    levelOrderTraversal(root);
    // cout<<"output of reverse level order traversal"<<endl; 

 return 0; 
}