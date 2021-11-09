#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n,int key)
{
    int mid,result=-1;
    int s=0;
   int e=n-1;
    while(s<=e)
    { mid=s+(e-s)/2;
        if(key==arr[mid])
        {
            result = mid;
            e=mid-1;
        }
        else if(key<arr[mid])
        {
         e=mid-1;

        }
        else if(key>arr[mid])
          {
              s=mid+1;
          }
    }
    return result;
}
int lastOccurence(int arr[],int n,int key)
{
    int mid,result=-1;
    int s=0;
   int e=n-1;
    while(s<=e)
    { mid=s+(e-s)/2;
        if(key==arr[mid])
        {
            result = mid;
            s=mid+1;
        }
        else if(key<arr[mid])
        {
         e=mid-1;

        }
        else if(key>arr[mid])
          {
              s=mid+1;
          }
    }
    return result;
}
int main()
{
    int i,n,arr[100],key,t,x,y;
   cout<<"enter th test cases";
    cin>>t;
    while(t--){
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key to search";
    cin>>key;

   x=firstOccurence(arr,n,key);
   if(x!=-1)
   {
       y=lastOccurence(arr,n,key);
       cout<<key<<"  - "<<y-x+1;
   }
   else cout<<"Element not present ";

}
}
