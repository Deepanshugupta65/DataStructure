#include<iostream>
#include<stack>
using namespace std;

class Stack{
    // properties
    public:
    int *arr;
    int top;
    int size;
    //  behavior 
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top >1){
            top++;
            arr[top] = element;
        }
        else {
            cout<<" stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else {
            cout<<"Stack underflow"<<endl;
        }
    }
    int peak(){
        if(top>= 0 && top<size)
          return arr[top];
    
    else{
        cout<<"stack is empty"<<endl;
    }
   }
   bool isempty(){
    if(top == -1){
        return true;
    }
    else {
        return false;
    }
   }
};
int main(){
    Stack st(5);

    st.push(22);
    st.push(45);
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;

}
