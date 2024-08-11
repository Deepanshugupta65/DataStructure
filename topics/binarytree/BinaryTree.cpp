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
    cout<<"Enter data for inserting  in left"<<data<<endl;
    root -> left = buildTree(root->left);
    cout<<"enter data for inserting in right"<<data<<endl;
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
//  inorder traversal by using iterative method
void inorder(node* root){
    stack<node*> s;
    node* curr = root;
    while(!s.empty() || curr != NULL){
      if(curr != NULL ){
        s.push(curr);
        curr = curr->left;
      }
      else{
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
      }
    }
}

void preorder(node* root){
    stack<node*> s;
    if(root == NULL) return ;
    node* curr = root;
    s.push(root);
    while(!s.empty()){
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        if(curr -> right!= NULL){
            s.push(curr ->right );
        }
         if(curr -> left!= NULL){
            s.push(curr ->left );
        }
    }
}
//    post order
void postorder(node* root){
    vector<int> postorder;
    if(root==NULL) return ;
    stack<node*> st1,st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left != NULL){
            st1.push(root->left);
        }
          if(root->right != NULL){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
    }
    for(auto s:postorder){
        cout<<s<<" ";
    }
}
int main(){
    node* root;
    root =buildTree(root);
    // level order traversal
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"enter the level order traversal output"<<endl;
    levelOrderTraversal(root);
    cout<<"output of inorder iterative method "<<endl; 
    inorder(root);
    cout<<endl;
    cout<<"output of preorder interative method"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"output of postorder interative method"<<endl;
    postorder(root);

 return 0; 
}