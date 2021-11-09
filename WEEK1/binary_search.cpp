#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int mid,count=0;
    int s=0;
   int e=n-1;
    while(s<=e)
    { mid=s+(e-s)/2;
        if(key==arr[mid])
        {
            return count;
        }
        else if(key<arr[mid])
        {
         e=mid-1;
         count++;
        }
        else if(key>arr[mid])
          {
              s=mid+1;
              count++;
          }
    }
    return -1;
}
int main()
{
   int i,n,arr[100],key,t,res;
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
    res=binary_search(arr,n,key);
    if(res==-1)
        cout<<"Not present";

    else cout<<"present "<<endl<<"total comparisons : "<<res+1;
}
}
