#include<iostream>
int count_inv=0;
using namespace std;
void merging(int arr [],int l,int r,int mid )
{
  int n1=mid-l+1;
  int n2=r-mid;

  int a[100],b[100];
  for(int i=0;i<n1;i++)
  {
      a[i]=arr[l+i];
  }
  for(int i=0;i<n2;i++)
  {
      b[i]=arr[mid+1+i];
  }


  int i=0,j=0,k=l;
  while(i<n1 && j<n2)
  {
      if(a[i]<b[j])
      {
        arr[k]=a[i];
         i++,k++;
      }
      else
      {  count_inv+=n1-i;
          arr[k]=b[j];
          j++,k++;

      }
  }
  while(i<n1)
  {
      arr[k]=a[i];
         i++,k++;
  }
  while(j<n2)
  {
      arr[k]=b[j];
          j++,k++;
  }
}
merge_sort(int arr[],int l, int r )
{
  if(l<r){
        int mid=(l+r)/2;
      merge_sort(arr,l,mid);
      merge_sort(arr,mid+1,r);

      merging(arr,l,r,mid);
  }
}
int main()
{
    int arr[100],n,t,i;
    cout<<"enter the no. of test cases";
    cin>>t;
    while(t--)
    {
        cout<<"enter the length of array";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int l=0;
        int r=n-1;
        merge_sort(arr,l,r);
        for(i=0;i<n;i++)
        {
            cout<<arr[i];
        }
         cout<<"no. of inversion: "<<count_inv;
    }
}
