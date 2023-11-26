#include<bits/stdc++.h>
using namespace std;
void solve(int* arr , int n ,int k){
    sort(arr , arr +n);
    cout<<k<<endl;
    int min = arr[k-1];
    cout<<" kth element in array"<< min<<endl;
}
int main(){
    int arr[] = {7,10,4,3,20,15};
    int n = 6;
    int k =3;
    solve(arr,6,4);
    return 0;
}