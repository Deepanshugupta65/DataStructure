#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* buildtree(node* root){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1) return NULL;

    cout<<"enter the data in left side"<<data<<endl;
    root -> left = buildtree(root -> left);
    cout<<"enter the data in right side"<<data<<endl;
    root -> right = buildtree(root -> right);
    return root;

}
void levelordertravelsal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.push(NULL);
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<endl;
            if(temp->left){
                q.push(temp-> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}
int main(){
   node* root = NULL;
   root =  buildtree(root);
   levelordertravelsal(root);
}
