#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{  int  shift=0,comp=0;
  for(int i=1;i<n;i++)
  {
      int current=arr[i];
      int j=i-1;
     while(current<arr[j] && j>=0)
     {
         arr[j+1]=arr[j];
         shift++;
         j--;
     }

     arr[j+1]=current;
  }
  for(int i=0;i<n;i++)
  {
     cout<<arr[i]<<" ";
  }
  cout<<"no. of shifts"<<shift;
  cout<<"no. of comparisons : "<<shift+n-1;
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
        insertion_sort(arr,n);
    }
}

