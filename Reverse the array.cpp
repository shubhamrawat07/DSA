#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    for(int i=0 ;i<n/2;i++)
    {
        arr[i]=arr[i]+arr[n-1-i];
        arr[n-1-i]=arr[i]-arr[n-1-i];
        arr[i]=arr[i]-arr[n-1-i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
