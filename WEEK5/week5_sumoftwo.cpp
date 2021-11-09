#include<iostream>

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
      {
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
void merge_sort(int arr[],int l, int r )
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
    int t;
    cout<<"enter the no. of test cases";
    cout<<endl;
    cin>>t;
    int n,key,arr[100];
    while(t--)
    {
        cin>>n>>key;
        cout<<" enter the elements "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int l=0,r=n-1;
        merge_sort(arr,l,r);
        while(l<r)
        {
          if((arr[l]+arr[r])==key)
          {
              cout<<l<<" and "<<r<<endl;
              exit(0);
          }
          else if((arr[l]+arr[r])>key)
           {
               r--;
           }
           else  if((arr[l]+arr[r])<key)
           {
               l++;
           }
        }


    }
return 0;
}
