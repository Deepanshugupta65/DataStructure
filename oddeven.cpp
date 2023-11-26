#include<iostream>
using namespace std;
int main()
{
    int arr[20],i,j,size,temp,loc,min;
    cout<<"entre the no ";
    cin>>size;
    cout<<"entre array element";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(size-1);i++)
    {
        min = arr[i];
        loc = i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                loc = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }
    cout<<"array in asscending";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}