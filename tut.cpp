// #include<iostream>
// using namespace std;
// void square(int *p){
// int a=10;
// p=&a;
// *p = (*p) * (*p);
// cout<<*p<<endl;
// cout<<p<<endl;
// }
// int main(){
//     int a = 10;
//     square(&a);
//     cout<<a<<endl;
// }
/*#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int smalloutput = factorial(n-1);
    return n*smalloutput;
    
}
int main(){
    int n;
    cin>>n;
    int output = factorial(n);
    cout<<output<<endl;
}*/
/*#include <iostream>
using namespace std;
int power(int x, int y){
    if(y==0)
    return 1;
    else if(y%2==0)
    return power(x,y/2)*power(x,y/2);
    else 
    return x*power(x,y/2)*power(x,y/2);
}
int main(){
    int x,y;
    cin>>x>>y;
    int num = power(x,y);
    cout<<num<<endl;
}*/
// #include<iostream>
// using namespace std;
// int num(int n){
//     if(n==0)
//     return 0;
// while(n>0)
// }
// int main(){
//     int n;
//     cin>>n;
//     int num2 = num(n);
//     cout<<num2<<endl;
// }
// #include<iostream>
// using namespace std;
// bool is_sorted(int a[],int size){
// if(size==0 || size==1){
//     return true;
// }
// if(a[0]>a[1]){
//     return false;
// }
// bool isSmallSorted = is_sorted(a+1,size-1);
// return isSmallSorted;
// }
// int main(){

//     int arr[] = {1,2,3,4,5};
//     cout<< is_sorted(arr,5)<<endl;

//     int arr2[] = {2,3,1,5,8};
//     cout<< is_sorted(arr2,5)<<endl;
// }
/* sum of array
#include<iostream>
using namespace std;

int addarr(int a[],int size){
    if(size==0||size==1){
        return a[0];
    }
    else{
        return a[0]+addarr(a+1,size-1);
    }
}
int main(){
  int arr[] = {1,2,3,4,5};
  cout<< addarr(arr,5)<<endl;
}
*/


/* check number
#include<iostream>
using namespace std;
int arr(int a[],int size,int key)
if(a[0]==key){
    return true;
}
else{
    int num = arr(a+1,size-1);
    return false;
}
int main(){
    int size;
    int a[size];
    cin>>size;
    for(int i=0;i<=size;i++){
    cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<arr(a,size,key)<<endl;
}*/
