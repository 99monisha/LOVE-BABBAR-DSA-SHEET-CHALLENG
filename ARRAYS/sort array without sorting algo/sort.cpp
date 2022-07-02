#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int a1=0,a2=0,a3=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0){
        a1++;}
        else if(a[i]==1){
        a2++;}
        else{
        a3++;}
    }
    i=0;
    while(a1--)
    a[i++]=0;
    while(a2--)
    a[i++]=1;
    while(a3--)
    a[i++]=2;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}