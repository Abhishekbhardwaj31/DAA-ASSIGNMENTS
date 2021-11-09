#include<iostream>
using namespace std;
void swap_q(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition_q(int arr[],int l,int r)
{
    int i=l-1;
    int pivot=arr[r];

    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap_q(arr,i,j);
        }
    }
    swap_q(arr,i+1,r);
    return i+1;
}
void quick_sort(int arr[],int l,int r)
{
    while(l<r)
    {
        int pi=partition_q(arr,l,r);

        quick_sort(arr,l,pi-1);
        quick_sort(arr,pi+1,r);
    }
}
int main()
{
    int arr[100],i,n,t;
    cout<<"enter the number of test cases";
    cin>>t;
    while(t--)
    {
        cout<<"enter the size of array";
        cin>>n;
        cout<<"enter the elemnts";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int l=0;
        int r=n-1;
        quick_sort(arr,l,r);
         for(i=0;i<n;i++)
        {
            cout<<arr[i]<<"  ";
        }
    }
}
