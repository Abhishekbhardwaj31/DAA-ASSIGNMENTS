#include <bits/stdc++.h>
using namespace std;

int jump_Search(int arr[], int x, int n)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n)-1] < x)
    {
        prev = step;
        step =step+ sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;

    return -1;
}


int main()
{
  int t;
  cout<<"enter the no. of test cases";
  cin>>t;
  while(t--){
        int arr[100],n,x,i;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key to search";
    cin>>x;
    int index = jump_Search(arr, x, n);

    if(index==-1)
        cout<<"Not Present";
    else cout << "\nNumber " << x << " is at index " << index;
  }
    return 0;
}
