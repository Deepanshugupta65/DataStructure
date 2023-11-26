#include<iostream>
#include<vector>
using namespace std;
void isprime(bool n){
    // vector<bool> isprime(n , true);
    isprime[0] = isprime[1] = false;
    for(int i =2;i<n;i++){
     if(isprime[i]==true){
          for(int j = 2*i;j<n;j = j+i){
          isprime[j] = 0;
         }
     }
}

}

int main(){
    int n;
    cin>>n;
    if(isprime[n]){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"noit"<<endl;
    }
}