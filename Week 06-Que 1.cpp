//QUE 16 
//Week 6 -que 1


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 bool check_path(int source,int dest,vector<int>adj[],int n)
 {
     stack<int>st; 
     int vis[n]={0};
             st.push(source);
             vis[source]=1;
             while(st.size()>0)
             {
                 int node=st.top();
                 st.pop();
                  if(node==dest)
                  return true;
                 for(auto i:adj[node])
                 {
                     if(vis[i]==0)
                     {
                         st.push(i);
                         vis[i]=1;
                     }
                 }
             } 
         return false;    
 }
int main()
{   
    cout<<"ANANT GUPTA   G     20011921"<<endl;
    int n,e,u,v;
    cin>>n>>e; 
    vector<int>adj[n];
    for(int i=0;i<e;i++)
    {  
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
     int source,dest;
     cin>>source>>dest;
     if(check_path(source,dest,adj,n))
     cout<<"Yes Path Exists";
     else
     {
         cout<<"No Such Path Exists";
     }
    return 0;
}
