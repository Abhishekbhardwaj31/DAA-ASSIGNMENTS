#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
            return i;
    }
    return -1;
}
int main()
{
    int i,t,n,arr[100],res,key;
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
    res=linear_search(arr,n,key);
    if(res!=-1)
        cout<<"present at : "<<res<<endl<<"totalo comparisons : "<<res+1;
    else cout<<"Not present";
}
}
