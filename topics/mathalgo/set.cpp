#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1 = {1,1,2,3,3,3};
    vector<int> v2 = {5,6,7,5,2,3,6};
    set<int> set1;
    for(auto it : v1){
        set1.insert(it);
    }
    int sum =0;
    for(auto m:v2){
        if(set1.find(m)!=set1.end()){
            sum=sum+m;
        }
    }
    cout<<sum<<endl;
}