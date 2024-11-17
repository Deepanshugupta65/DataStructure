#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

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

void inorder(Node* root){
    // base order
    if(root == NULL){
        return ;
    }
    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}
void preorder(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}
void postorder(Node* root){
    if(root == NULL){
        return ;
    }
    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data<<" ";

}

Node* inserttoBst(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }
    if (data > root->data) {
        root->right = inserttoBst(root->right, data);
    } else {
        root->left = inserttoBst(root->left, data);
    }
    return root;
}

void takeinput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = inserttoBst(root, data);
        cin >> data;
    }
}
// min value of BST
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
// max value in bst
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}
int main() {
    Node* root = NULL;
    cout << "Enter data to create a BST (-1 to stop): " << endl;
    takeinput(root);
    cout << "Printing the BST level order traversal:" << endl;
    levelOrderTraversal(root);
    cout<<"inorder "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder "<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder"<<endl;
    postorder(root);
    cout<<endl;
    cout<<"min value is "<<minVal(root)->data<<endl;
    cout<<"max value is "<<maxVal(root)->data<<endl;

    return 0;
}