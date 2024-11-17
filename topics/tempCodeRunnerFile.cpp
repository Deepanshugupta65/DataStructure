
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
