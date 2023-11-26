#include<iostream>
using namespace std;
void fact(int n){
    // base case
    if(n==0)
    return ;
    fact(n-1);
    cout<<n<<endl;
    // return t;
}
int main(){
   int n;
   cin>>n;
  fact(n);
//   cout<<ans<<endl;
  return 0;
}