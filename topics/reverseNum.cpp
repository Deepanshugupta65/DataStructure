#include<bits/stdc++.h>
#include<stack>
using namespace std;
void reverse(stack<int> &s){
    stack<int> b;
  while(!s.empty()){
    int num = s.top();
   s.pop(); 
   b.push(num);
  }
     while(!b.empty()){
        cout<<b.top()<<endl;
        b.pop();
    }
}
 

int main(){
    stack<int> s;
    int size =5;
    int n;
    cout<<"enter a five num"<<endl;
    for(int i =0;i<size;i++){
        cin>>n;
        s.push(n);
    }
    // s.push(55);
    cout<<"reverse a number"<<endl;
    reverse(s);
    // print_stack(s);
   
    return 0;
}