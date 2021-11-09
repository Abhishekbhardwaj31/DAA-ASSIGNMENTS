#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool vis[100]={0};
int dist[100];

int nearestnode()
{
    int minimum=std::numeric_limits<int>::max();
    int minnode=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i] && dist[i]<minimum)
        {
            minimum=dist[i];
            minnode=i;
        }
    }
    return minnode;
}

void dijkstra(int arr[][],int n)
{
    for(int i=0;i<n;i++)
    {
        int nearest=getnearestnode();
        vis[nearest]=1;

        for(int adj=0;adj<n;adj++)
        {
            if(cost[nearest][adj]!=INF && dist[adj]<dist[nearest]+cost[nearest][adj])
            {

            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter the no. of nodes ? "<<endl;
    cin>>n;
    cout<<"enter the edges "<<endl;
    int cost[100][100],s,e,src;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {   dist[i]=std::numeric_limits<int>::max();
                cin>>cost[i][j];
      }
    }
    cout<<"enter the source node ?"<<endl;
    cin>>src;
    dist[src]=0;

     for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
                cout<<cost[i][j];
      }
    }

    for(int i=0;i<n;i++)
    {
        cout<<dist[i]<<" ";
    }
}
