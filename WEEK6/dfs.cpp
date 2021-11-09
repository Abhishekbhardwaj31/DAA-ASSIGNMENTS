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
    int sc,d;
    cin>>sc>>d;
   stack <int> s;
   s.push(sc);
   vis[sc]=true;

   while(!s.empty())
   {
   int node =s.top();
   s.pop();
   cout<<node<<" -> ";
   vector <int> :: iterator it;
   for(it=adj[node].begin();it!=adj[node].end();it++)
   {
       if(*it==d)
       {
           exit(0);
       }
       if(!vis[*it])
       {
         vis[*it]=1;
         s.push(*it);
       }
   }
   }
    return 0;
}

