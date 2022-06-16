//QUE 15
//Week 4 --que 3

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{   cout<<"ANANt GUPTA    G     20011921"<<endl;
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    cin>>arr2[i];
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        i++;
        else
        j++;
    }
    return 0;
}
