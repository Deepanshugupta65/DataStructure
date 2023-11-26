#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
   
    // Constructor
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};
  
class Stack{
    Node* top;
    public:
    Stack() 
    // push the element in node 
    { top = NULL;}
    void push(int data){
         if (!temp) {
            cout << "\nStack Overflow";
            exit(1);
        }
        Node* temp = new Node(data);
        temp -> data = data;
        temp -> next = top;
        top = temp;
    }

    //  pop the element from node list 
    void pop(){
        if(top == NULL) 
        cout<<"under flow stack";
        exit(1);
        else{
            temp = top;
            top = top -> next;
            free(temp);
        }
    }
     int peek()
    {
        // If stack is not empty , return the top element
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }
      void display()
    {
        Node* temp;
 
        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow";
            exit(1);
        }
        else {
            temp = top;
            while (temp != NULL) {
 
                // Print node data
                cout << temp->data;
 
                // Assign temp link to temp
                temp = temp->link;
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    }
};
int main()
{
    // Creating a stack
    Stack s;
 
    // Push the elements of stack
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    // Delete top elements of stack
    s.pop();
    s.pop();
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    return 0;
}