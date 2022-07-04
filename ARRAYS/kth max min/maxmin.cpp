/*
6
10 90 30 56 76 20
10 90 30 56 76 20 
4
Smallest Elemennts:56
Largest Elemennts:30

*/

#include<bits/stdc++.h>
using namespace std;
int smallest(int a[],int n,int k)
{
    sort(a,a+n);
    return a[k-1];

}
int largest(int a[],int n,int k)
{
    sort(a,a+n);
    reverse(a,a+n);
    return a[k-1];
}

void print(int a[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int n,i,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    print(a,n);
    cin>>k;
    cout<<"Smallest Elemennts:"<<smallest(a,n,k)<<endl;;
    cout<<"Largest Elemennts:"<<largest(a,n,k)<<endl;
    return 0;
}