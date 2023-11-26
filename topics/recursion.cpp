/*#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0)
    return 1;
    int small = factorial(n-1);
    int big = n * small;
    return big;
        // return n * factorial(n-1);-

}
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
}
*/
// theory part caver in dsa copy
// power of 2
/*
#include<iostream>
using namespace std;
int power (int n){
    // base case 
    if(n ==0)
    return 1;
    // recusrive relation
    int smallerpro = power(n -1);
    int bigpro = 2 * smallerpro;
    return bigpro;
}
int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;
}
*/
/* counting a number*/
/*
#include<iostream>
using namespace std;
void print(int n){
    // base case 
    if( n==0)
    return;
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
void saydigit(int n , string arr[]){
    // base case 
   if( n ==0)
      return ;

    // processing 
    int digit = n % 10;
    n = n/10;


    // recursive call
    saydigit(n, arr);
    cout<<arr[digit]<<endl;

}
int main(){
    string arr[10] = {"zero" ,"one","two" ,"three","four","five","six","seven",
                    "eight","nine"};
    int n;
    cin>>n;
    saydigit(n , arr);
    cout<<endl;  
    return 0;              
}*/


// is sorted return true other false
/*

#include<iostream>
using namespace std;
bool isbool(int arr[] , int n){
    // base case
    if( n ==0 || n == 1)
    return true;
    else if (arr[0]>arr[1])
    return false;
    else
    bool remaining = isbool(arr+1 , n-1);
    return true;
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int ans = isbool(arr , size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else 
    cout<<"not "<<endl;
}
*/


//  get sum of array
/*/

#include<iostream>
using namespace std;
void print(int arr[] ,int n){

    cout<<n<<" ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }cout<<endl;
}
int getsum(int arr[] , int n){
    print(arr , n);
    // base case
    if(n ==0)
    return 0;
    if( n ==  1)
    return arr[0];
    int total = getsum(arr +1 , n -1);
    int sum = total + arr[0];
    return sum;
}
int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int ans = getsum(arr , size);
    cout<<"sum is "<<ans<<endl;
}

*/
// linear search by using recursion

// #include<iostream>
// using namespace std;

// bool linearsearch(int arr[] , int size , int key){
//     if(size == 0)
//     return false;
//     if(arr[0] == key){
//     return true;
//     }
//     else {
//     bool remain  = linearsearch(arr+1 , size-1,key);
//     return remain;
//     }
// }
// int main(){
//     int arr[5] = {2,3,4,5,6};
//     int size = 5;
//     int key = 4;
//     int ans = linearsearch(arr , size , key);
//     if(ans){
//         cout<<"i found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
// }

/*binary search*/
/*
#include<iostream>
using namespace std;
void print(int arr[] ,int s , int e){
    for(int i =s;i<=e;i++){
        cout<<arr[i]<<" ";
        }cout<<endl;
}
bool binarysearch(int arr[] , int s , int e ,int key){

    print(arr,s,e);
    //  base case;
    if(s>e)  
    return false;

    int mid = s +(e-s)/2;

    if(arr[mid] == key)
    return true;

    else if(arr[mid]<key)
    {
   return binarysearch(arr,mid+1,e,key);
     }
    else{
     return binarysearch(arr,s, mid-1,key);
     }
}

int main(){
    int arr[9] = {2,3,4,5,6,7,8,9,10};
    int size = 9;
    int key = 5;
    cout<<"present "<<binarysearch(arr , 0 , 9, 5)<<endl;

    return 0;
}
*/

// first and last occurenece using recursion
/*
#include<iostream>
using namespace std;

int fastocc(int arr[] ,int s,int e,int key){
    int mid = s + (e-s)/2;
    int ans =-1;
    // base case
    if(s>e)
    return 0;
    if(arr[mid]==key && arr[mid]>arr[mid-1])
    {
    ans = mid;
    return ans;
    }
    else if(key>arr[mid])
    {
    return fastocc(arr , mid+1,e,key);
    }
    else
    {
    return fastocc(arr, s,mid-1,key);

    }
}
int lastocc(int arr[] ,int s,int e,int key){
    int mid = s + (e-s)/2;
    int ans =-1;
      if(s>e)
    return 0;
    if(arr[mid]==key && arr[mid] < arr[mid+1])
    {
    ans = mid;
    return ans;
    }
    else if(key>=arr[mid])
    {
    return lastocc(arr , mid+1,e,key);
    }
    else
    {
    return lastocc(arr, s,mid-1,key);

    }
}
int main(){
    int arr[5]={2,2,2,2,5};
    int size = 5;
    int key = 3;
    cout<<"first"<<fastocc(arr , 0,5,2)<<endl;
    cout<<"last"<<lastocc(arr , 0,5,2)<<endl;
    return 0;
}  
*/

//  Reverse a string using a recursion
/*
#include<iostream>
using namespace std;

void reverse(string &str, int i,int j){
    cout<<" call recive "<< str<<endl;
    cout<<"length of i&j "<<i <<j<<endl;
    // base case 
    if(i>j) 
    return;
    swap(str[i],str[j]);
    i++;
    j--;
    // recursive call
    reverse(str,i,j);
}
int main(){
    string name = "abcde";
    cout<<endl;
    reverse(name , 0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;
    return 0;
}*/

// optimize of string
/*
#include<iostream>
using namespace std;

void reverse(string &str, int i=0){
    if(i==str.size()/2) return;
   swap(str[i],str[str.size()-i-1]);
   reverse(str,++i);
}
int main(){
    string name = "abcde";
    cout<<endl;
    reverse(name);
    cout<<endl;
    cout<<name<<endl;
    return 0;
}*/

// check pallindrom by recursion
/*
#include<iostream>
using namespace std;
bool checkpallindrom(string &str,int i,int j){
    // base case
    if(i>j) 
    return true;
    if(str[i] != str[j])
    return false;
    else{
        // recursive call
        return checkpallindrom(str,i+1,j-1);
    }
}
int main(){
    string name ="aabbaa";
    cout<<endl;
    bool ispallindrom = checkpallindrom(name,0,name.length()-1);
    if(ispallindrom){
        cout<<"its is pallindrom"<<endl;
    }
    else{
        cout<<"its not "<<endl;
    }
    return 0;
}

*/

// power of number using recursion
/*
#include<iostream>
using namespace std;

int power(int a , int b){
    // base case 
    if(b==0) return 1;
    if(b==1) return a;
    
    // recursive call
    int ans = power(a,b/2);

    // if b is even
    if(b%2==0){
        return ans*ans;
    }
    // b is odd
    else
    {
        return a * ans;
    }

}
int main(){
    int a , b;
    cin>>a>>b;
    cout<<endl;
    int ans = power(a,b);
    cout<<"ans is"<<ans<<endl;
    return 0;
}

*/