#include<iostream>
using namespace std;
bool duplicate(int arr[],int n)
{
   int i=0;
   int mid,count=0;

   for(i=0;i<n;i++)
   { int s=0;
   int e=n-1;

    while(s<=e)
    { mid=s+(e-s)/2;
        if(arr[i]==arr[mid])
        {
            return true;
        }
        else if(arr[i]<arr[mid])
        {
         e=mid-1;

        }
        else if(arr[i]>arr[mid])
          {
              s=mid+1;
          }
    }
   }
   return false;
}
int main()
{
    int t,i,arr[100],n;
    cout<<"enter  no. of test cases";
    cin>>t;
    while(t--){
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool result =duplicate(arr,n);
    if(result==true)
        cout<<" Yes ";
    else cout<<"false";
   }
 }
