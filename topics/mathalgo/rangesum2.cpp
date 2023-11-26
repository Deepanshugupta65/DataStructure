#include<iostream>
using namespace std;
int main(){
    int first , second ;
    cout<<"enter the range"<<endl;
    cin>>first>>second;
    int sum =0;
    for(int i =first;i<=second;i++){
     sum += i;
    }
    cout<<sum<<endl;
}