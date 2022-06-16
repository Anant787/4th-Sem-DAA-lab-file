//QUE 12 LAB FILE
//week 4--que 3

#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    cout<<"Anant Gupta   G  20011921  "<<endl;
    int t,n,i,k; 
    cin>>t;
    for(int j=0;j<t;j++)
    {
    cin>>n;
    int arr[n]; 
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>k;
    set<int> s(arr, arr + n);
    set<int>::iterator itr= s.begin();
    if(k>n)
    cout<<"not present"<<endl;
    else{
        advance(itr, k - 1);  
        cout<<*itr<<" ";
        set<int>::iterator itr= s.begin();
         advance(itr,n-k);  
         cout<<*itr<<endl;
    }
    }
    return 0;
}
