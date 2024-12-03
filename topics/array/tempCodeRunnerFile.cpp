
by uisng set
// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int sort(int arr[],int n){
    set<int>st;
    for(int i =0;i<n;i++){
        st.insert(arr[i]);
    }
    int index =0;
    for(auto it:st){
        arr[index] = it;
        cout<<arr[index]<<" ";
        index++;
    }
    return index;
}
int main() {
    // Write C++ code here
    int arr[] = {1,1,2,2,2,3,3};
    int n = 7;
    int s =sort(arr,n);
    cout<<s<<endl;

    return 0;
}

