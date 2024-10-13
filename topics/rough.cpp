#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this ->right = NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1) return NULL;
    cout<<"enter the data for left"<<root->data<<endl;
    root->left =buildtree(root->left);
    cout<<"enter the data for right"<<root->data<<endl;
    root->right = buildtree(root->right);
    return root;
}
void levelordertraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
    node* temp = q.front();
    q.pop();
    if(temp==NULL){
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

void inorder(node* root){
    stack<node*>st;
    node* curr = root;
    while(!st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        else{
            node* curr = st.top();
            st.pop();
            cout<<curr->data<<" ";
            curr = curr ->right;
        }
    }
}
 void preorder(node* root){
    stack<node*>s;
    node* curr = root;
    s.push(curr);
    while(!s.empty()){
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        if(curr->right!=NULL){
            s.push(curr->right);
        }
        if(curr->left!=NULL){
            s.push(curr->left);
        }
    }
 } 
void postorder(node* root){
    vector<int> postorder;
    if(root==NULL) return ;
    node* curr = root;
    stack<node*> st1,st2;
    st1.push(curr);
    while(!st1.empty()){
        curr = st1.top();
        st1.pop();
        st2.push(curr);
        if(curr->left != NULL){
            st1.push(curr->left);
        }
          if(curr->right != NULL){
            st1.push(curr->right);
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
// 1 2 4 -1 -1 5 6 -1 -1 7 -1 -1 3 -1 8 9 -1 -1 -1
int main(){
    node* root ;
    root = buildtree(root);
    // level order traversal
    levelordertraversal(root);
    cout<<"inorder output"<<endl;
    inorder(root);
    cout<<"preorder output"<<endl;
    preorder(root);
    cout<<"postorder output "<<endl;
    postorder(root);
}