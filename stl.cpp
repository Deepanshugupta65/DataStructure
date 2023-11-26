#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int> v){
    cout<<"Size"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
//first
// int main(){
//     vector<int> v;  /* satrt at sizeis  0*/
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         printvec(v);
//         v.push_back(x);   /*elemnt insert at back in */
//     }
//     printvec(v);
// }
//second
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(54);
    v.push_back(45);
    printvec(v);
    v.pop_back();  //pop the data back side
    printvec(v);
}