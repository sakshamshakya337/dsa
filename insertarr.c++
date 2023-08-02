#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,pos,val;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position where you want to insert the value: ";
    cin>>pos;
    cout<<"Enter the value you want to insert: ";
    cin>>val;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;
    cout<<"The new array is: ";
    for(i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cin>>val;
    return 0;
}