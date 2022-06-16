//Que 27
//Week 9--Que 3


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Anant gupta    G    20011921"<<endl;
    int n,num,n1,n2;
    cin>>n;
    vector<int>file;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        file.push_back(num);
    }
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0;i<n;i++)
    {
        q.push(file[i]);
    }
    int res=0;
    while(q.size()>1)
    {
         n1=q.top();
        
         q.pop(); 
         n2=q.top();
          q.pop();
         res+=(n1+n2);
         q.push(n1+n2);
    }
    cout<<res;
    return 0;
}
