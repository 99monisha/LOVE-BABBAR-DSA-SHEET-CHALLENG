#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    for(i=0;i<n;i++)
    {
        maximum=max(maximum,a[i]);
        minimum=min(minimum,a[i]);
    }
    cout<<maximum<<" "<<minimum;
    return 0;
}