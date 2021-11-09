#include<bits/stdc++.h>
#include<iostream>

 using namespace std;
 const int N=1e5+2;
 bool vis[N];
 vector <int> adj[N];

int main()
{

    int n,m;
    cout<<"enter the number of node and edges";
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        vis[i]=0;
    }

    cout<<"enter the adjacency list";
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    cout<<"enter the source and destination node"<<endl;
    int s,d;
    cin>>s>>d;
    queue <int> q;
    q.push(s);
    vis[s]=true;
    cout<<"your BFS :"<<endl;
   while(!q.empty())
    {  int node=q.front();
        q.pop();
        cout<<node<<endl;

        vector <int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++)
        {   if(*it==d)
        {   cout<<*it<<endl;
            exit(0);
        }
            if(!vis[*it])
            {
                vis[*it]=1;
                q.push(*it);
            }
        }
    }
    return 0;
}
