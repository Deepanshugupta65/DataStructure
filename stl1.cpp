// #include<iostream>
// #include<vector>
// using namespace std;

//     int main(){
//         vector<double>salaries;
//         bool more = true;
//         while(more){
//             double s;
//             cout<<"please enter a salary";
//             cin>>s;
//             if(s==0)
//             more=false;
//             else
//             salaries.push_back(s);
//         }
//         double highest = salaries[0];
//         int i;
//         for(i=1;i<salaries.size();i++)
//         if(salaries[i]>highest)
//         highest = salaries[i];

//         for(i=0;i<salaries.size();i++){
//             if(salaries[i]==highest)
//                 cout<<"highest value";
//                 cout<<salaries[i]<<"\n";
//         }
//         return 0;
// //     }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// unordered_map<char,int> symbol ={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
// string isBalanced(string s){
//     stack<char> st;
//     for(char bracket:s){
//         if(symbol[bracket]<0){
//             st.push(bracket);
//         }else{
//             if(is.empty()) return "NO";
//             char top = st.top();
//         }
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         string s;
//         cin>>s;
//         cout<<isBalanced(s);
//     }
    
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,4,5,8,6,4};
    for(auto i:arr){
        cout<<i<<" ";
    }
}