#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    int i,temp,comp=0,swaps=0;
    for(i=0;i<n-1;i++)
    {    int index=0;
         int minm=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(minm>arr[j])
            {
                minm=arr[j];
                index=j;
            }
            comp++;
        }
        if(index!=0)
        {
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
        swaps++;
        }
    }
     for(i=0;i<n;i++)
        {
            cout<<arr[i];
        }
        cout<<"no. of comparisons : "<<comp<<endl;
        cout<<"no. of swaps"<<swaps<<endl;
}
int main()
{
    int t,i,n,arr[100];
    cout<<"enter the number of test cases";
    cin>>t;
    while(t--)
    {
        cout<<"enter th elength of array";
        cin>>n;
        cout<<"enter the elements";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        selection_sort(arr,n);
    }
}
