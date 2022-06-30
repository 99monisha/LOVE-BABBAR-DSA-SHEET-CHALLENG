#include<bits/stdc++.h>
using namespace std;
void reverseArray(int a[],int start, int end)
{
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void printArray(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
         cout<<a[i]<<" ";
    }
}
int main()
{ 
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    printArray(a,n);
    cout<<endl;
    reverseArray(a,0,n-1);
    cout<<endl;
    printArray(a,n);
    return 0;
}