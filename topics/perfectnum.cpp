// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cin>>n;
//     for(int i =1;i<n;i++){
//     if(n%i==0)
//     sum = i+sum;
//     }
//     if(sum == n){
//      cout<<"true";
//     }
//     else {
//     cout<<"false";
//     }
//     return 0;
// }
// armstrong number 
#include<iostream>
using namespace std;
int main(){
    int n;
    int r,temp ,s=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp = n;
    while(n>0){
     r = n%10;
     s = s + (r*r*r);
     n= n/10;
    }
    if(temp==s) 
    cout<<"yes it is armastrng"<<endl;
    else
    cout<<"it is not"<<endl;        
    cout<<temp<<endl;
    return 0;
}