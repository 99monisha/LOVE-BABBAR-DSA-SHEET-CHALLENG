/*
10
1 2 2 1 7 6 8 8 20 20
1 ocurs: 2 times.
2 ocurs: 2 times.
8 ocurs: 2 times.
20 ocurs: 2 times.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int visit[n];
    for(i=0;i<n;i++)
    {
    if(visit[i]!=1)
    {
        int count =1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                visit[j]=1;
            }
        }
        if(count==1)
        {
            cout<<a[i]<<" "<<"ocurs:"<<" "<<count<<" "<<"times.";
        }
    }
    }
    return 0;
}