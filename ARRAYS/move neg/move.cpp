/*
I/P:
9
-12 11 -13 -5 6 -7 5 -3 -6
O/P:
-13 -5 -7 -3 -6 -12 5 11 6
*/

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
    int j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(i!=j)
            {
                swap(a[i],a[j]);
                j++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}