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


//  reverse level order traversal

void reverseleveltraversal(node* root){
    vector<vector<int> > ans;
    if(root==NULL) return ;

    queue<node*> q;
    q.push(root);
    while(!q.empty()){
     int levelSize = q.size(); 
      vector<int> output;
        for (int i = 0; i < levelSize; ++i) {
        node* temp = q.front();
        q.pop();
        output.push_back(temp->data);
        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
       }
    ans.push_back(output);
    }
    reverse(ans.begin(),ans.end());
     for (const auto& level : ans) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;  // Print each level on a new line
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

void toplevelview(node* root){
    vector<int> ans;
    if(root==NULL){
        return ;
    }
    // first map data indicate is horizontal distansce and sencond one is inicate that root data
    map<int,int> topNode;
    queue<pair<node*,int> > q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*,int> temp = q.front();
        q.pop();
        node* frontNode = temp.first;
        int hd = temp.second;
        // for bottom view remove topNode == topNode.end conditioin
        if(topNode.find(hd)==topNode.end()){
            topNode[hd] = frontNode->data;
        }
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    for(auto i: topNode){
        cout<<i.second<<" ";
    }
    
}

int maximumdepth(node* root){
   if(root==NULL) return 0;
   int leftnode = maximumdepth(root->left);
   int rightnode = maximumdepth(root->right);
   return max(leftnode,rightnode) + 1;
}

int main(){
    node* root;
    root =buildTree(root);
    // level order traversal
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"enter the level order traversal output"<<endl;
    levelOrderTraversal(root);
    cout<<"reverse order traversal"<<endl;
    reverseleveltraversal(root);
    cout<<"output of inorder iterative method "<<endl; 
    inorder(root);
    cout<<endl;
    cout<<"output of preorder interative method"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"output of postorder interative method"<<endl;
    postorder(root);
    cout<<endl;
    cout<<"maximum indepth of binary tree"<<endl;
    int ans = maximumdepth(root);
    cout<<"indepth answaer "<<ans<<endl;
    // top level traversal
    cout<<"output of toplevel traversal"<<endl;
    toplevelview(root);


 return 0; 
}