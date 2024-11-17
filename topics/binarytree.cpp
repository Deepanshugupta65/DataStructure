#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*  left;
    node* right;
    node(int d){
        this -> data = d;
        this ->left = NULL;
        this -> right = NULL;
    }

};
// by using recursionbuild tree
node* buildtree(node* root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1 ) {
        return NULL;
    }
    cout<<"enter data for inserting in left"<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"enter data for inserting in right"<<data<<endl;
    root -> right = buildtree(root -> right);
    return root;
    }

  void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);
      cout<<"size of queue "<<q.size()<<endl;
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
// by using buildfromlevel order 
void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"enter the data left element"<<temp -> data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }
        cout<<"enter the data for right"<<temp -> data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

void inorder(node* root){
    // base order
    if(root == NULL){
        return ;
    }
    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}
void preorder(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root -> data<<endl;
    preorder(root -> left);
    preorder(root -> right);
}
void postorder(node* root){
    if(root == NULL){
        return ;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";

}
int main(){
    node* root = NULL;
    // creating a tree
    // root = buildtree(root);
    // level
    // levelOrderTraversal(root);
     buildFromLevelOrder(root);
    levelOrderTraversal(root);
    return 0;
}