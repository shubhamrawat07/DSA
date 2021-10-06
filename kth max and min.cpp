#include<iostream>
#include<algorithm>
using namespace std;
int min(int arr[],int n,int x)
{   
    sort(arr,arr+n);
    return arr[x-1];
}
int max(int arr[],int n, int y)
{
    sort(arr,arr+n);
    return arr[n-y];
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int num=7;
    int kth_min=3,kth_max=4;
    int mini=min(arr,num,kth_min);
    int maxi=max(arr,num,kth_max);
    cout<<"3rd min is : "<<mini<<" and 4th max is : "<<maxi;
    return 0;
}                                                Can be Optimised


                                       
