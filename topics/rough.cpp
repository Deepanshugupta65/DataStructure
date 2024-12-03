#include<iostream>
#include<queue>
using namespace std;

class Node{
    public :
    int data;
    Node*left;
    Node*right;
    
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* insertBST(Node* root,int data){
   if(root==NULL){
    return new Node(data);
   }
   if(data >root->data){
    root->right = insertBST(root->right,data);
   }
   else{
    root->left = insertBST(root->left,data);
   }
   return root;
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
       root = insertBST(root,data);
       cin>>data;
    }
}
// inoder 
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}
// deletion in bst
Node* deletion(Node* root,int key){
     
     if(root==NULL){
        return root;
     }
     if(root->data==key){
    //   0 child
    if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
    }
    // 1 child
     if(root->left==NULL && root->right!=NULL){
        Node* temp = root->right;
        delete root;
        return temp;
    }
    if(root->left!=NULL && root->right==NULL){
          Node* temp = root->left;
          delete root;
          return temp;
    }
    // 2 child
    
     }
     else if(key>root->data){
        root->right = deletion(root->right,key);
     }
     else{
        root->left = deletion(root->left,key);
     }
    //  
}
int main(){
    Node* root = NULL;
    cout<<"enter the data "<<endl;
    takeinput(root);
    cout<<" outptut of tree"<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    inorder(root);
}