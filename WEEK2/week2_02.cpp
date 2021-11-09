#include<iostream>
using namespace std;
int find_indices(int arr[],int n)
{
    int i,j,k,sum;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {   sum=arr[i]+arr[j];
            for(k=j+1;k<n;k++)
            {
                if(sum==arr[k])
                {
                     cout<<i<<" "<<j<<" "<<k;
                     return 0;
                }

            }
        }
    }
    return -1;
}
int main()
{
  int i,t,n,arr[100];
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
    int x=find_indices(arr,n);
    if(x==-1)
        cout<<"No sequence found";
   }
}
