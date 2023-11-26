#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int i=0;i<m;i++){
            if(arr[i][j]==x){
                flag=true;
            }
        }
    }
if(flag){
    cout<<"element is found\n";
}
else {
    cout<<"element is not fond\n";
}
return 0;
}