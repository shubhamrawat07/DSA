#include<iostream>
using namespace std;
int mini(int arr[],int n)
{
    int min=arr[0];
    
    for(int i=0;i<n;i++)
    {
        
        if(min>arr[i])
            min=arr[i];

    }
    return min;
}
int maxi(int arr[],int n)
{
    
    int max=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];

    }
    return max;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int min=mini(arr,n);
    int max=maxi(arr,n);
    cout<<max<<"  "<<min;
}
