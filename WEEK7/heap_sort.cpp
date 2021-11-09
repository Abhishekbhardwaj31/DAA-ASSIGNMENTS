#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
  int maxId=i;
  int l=2*i+1;
  int r=2*i+2;

  if(l<n && arr[l]>arr[maxId])
    maxId=l;

  if(r<n && arr[r]>arr[maxId])
    maxId=r;

  if(maxId != i)
  {
      swap(arr[i],arr[maxId]);
      heapify(arr,n,maxId);
  }

}
void heapsort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{
    int n;
    cout<<"enter the no. of nodes"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the nodes "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    heapsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
