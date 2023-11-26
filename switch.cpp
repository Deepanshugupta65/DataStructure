#include<iostream>
using namespace std;
int main(){

char button;
cout<<"input a character:";
cin>>button;

switch (button){
    case 'a':
        cout<<"namaste"<<endl;
        break;
        case 'b':
        cout<<"hola"<<endl;
        break;
        case 'c':
        cout<<"hii"<<endl;
        break;
        case 'd':
        cout<<"hola"<<endl;
        break;
        case 'e':
        cout<<"namaste"<<endl;
        break;

        default:
        cout<<"i am still learning more"<<endl;
        break;
}







    return 0;
}