/*
6
1 3 6 1 0 9
Minimum no of jumps to reach the end of array:3
*/

#include<bits/stdc++.h>
using namespace std;
int minijumps(int a[],int n)
{
    int jump[n];
    int i,j;
    if(n==0 || a[0]==0)
    return INT_MAX;

    jump[0]=0;
    for(i=1;i<n;i++)
    {
        jump[i]=INT_MAX;
        for(j=0;j<i;j++)
        {
            if(i<=j+a[j] && jump[j]!=INT_MAX){
            jump[i]=min(jump[i],jump[j]+1);
            break;
        }
    }
 }
 return jump[n-1];
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }

    cout<<"Minimum no of jumps to reach the end of array:"<<minijumps(a,n);
    return 0;
}