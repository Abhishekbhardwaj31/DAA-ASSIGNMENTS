#include<iostream>

using namespace std;
int main()
{   char arr[100];
    int n;
    int countarr[100]={0};

    cout<<"enter the length of array";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        countarr[arr[i]-96]+=1;
    }
    int maxm=0;
    int index=0;
    int i;
    for( i=1;i<=26;i++)
       {
           if(countarr[i]>maxm)
           {
               maxm=countarr[i];
               index=i;
           }

       }
       if(index>1)
        cout<<char(96+index)<<"   is present following times : "<<maxm;

        else cout<<"no duplicates";

}
