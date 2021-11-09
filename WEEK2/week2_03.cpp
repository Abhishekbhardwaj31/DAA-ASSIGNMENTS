#include<iostream>
using namespace std;
int differece(int arr[],int n,int key)
{
    int i,j,diff,count=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {   diff=arr[i]-arr[j];
            if(diff>0 && diff==key)
            {
                count++;
            }
            else if(diff<0)
            {
                diff=diff*(-1);
                if(diff==key)
                    count++;
            }

        }
    }

    return count;
}
int main()
{
    int i,t,n,arr[100],key;
    cout<<"enter the test cases";
    cin>>t;
    while(t--){
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;
    int x= differece(arr,n,key);
     if(x==-1)
        cout<<"Not Found!!";
     else cout<<x;
   }
}
