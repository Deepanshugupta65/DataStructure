#include <iostream>
using namespace std;

int main()
{
    int n,a,rev=0,num;
    cout<<"entre the num"<<endl;
    cin>>n;
    num=n;
    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(rev==num)
    {
        cout<<"pallindrom"<<endl;
    }
    else
    {
        cout<<"not pallindrom"<<endl;
    }
    return 0;
}