
#include<iostream>
using namespace std;
int main()
{
    int arr1[100],arr2[100],m,n;
    cout<<"enter the m and n: ";
    cin>>m>>n;
    cout<<"enter the elements 1st array";
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
     cout<<"enter the elements 2nd array";
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<"  ";
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j])
            j++;

        else if(arr1[i]<arr2[j])
            i++;
    }
    return 0;
}
