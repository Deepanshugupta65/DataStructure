#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"its a prime"<<endl;
    }
    else{
        cout<<"not prime "<<endl;
    }
    return 0;
}