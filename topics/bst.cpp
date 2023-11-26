#include<iostream>
#include<queue>
using namespace std;
class Node{
    
     public:
     int data;
     Node* left;
     Node* right;

     Node(int d){
        this->data =d;
        this->left = NULL;
        this->right = NULL;
     }
};
// level order
 void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
      cout<<"size of queue "<<q.size()<<endl;
    while(!q.empty()) {
        Node* temp = q.front();
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
Node* insertIntoBst(Node* root ,int d){
    // base case
    if(root == NULL){
         root = new Node(d);
         return root;
    }
    if(d>root ->data){
        // insert in right part
        root -> right = insertIntoBst(root->right,d);
    }
    else{
        // insert in left part
        root ->left = insertIntoBst(root->left,d);
    }
    return root;
}
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp =temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp-> right;
    }
    return temp;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBst(root , data);
        cin>>data;
    }
}
int main(){
    Node* root = NULL;
    cout<<"enter the data to create bst"<<endl;
    takeInput(root);
    cout<<"printing the bst"<<endl;
    levelOrderTraversal(root);
    cout<<"minimum val is"<<minVal(root) ->data<<endl;
    cout<<"maxmum val is"<<maxVal(root) ->data<<endl;

    return 0;
}