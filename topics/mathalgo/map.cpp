#include<bits/stdc++.h>
using namespace std;
// number of dupilicate array
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array element"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    // input in hashmap
    // hash[1000000] = {0} it will not work only 10^6 will work the size of hash but work in globally upside the main fun io.e. hash[10000000]
    int hash[13] ={0};
    for(int i =0;i<n;i++){
        hash[arr[i]] +=1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        // fetch from hash
        cout<<hash[num]<<endl;
    }
    return 0;
}