/*
5

10 20 30 40 50
10 20 30 40 50 

4

10 20 30 40
10 20 30 40  

Union:
10 20 30 40 50  

Intersection:
10 20 30 40 

*/

#include<bits/stdc++.h>
using namespace std;
void printIntersection(int a1[],int a2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && i<n)
    {
        if(a1[i]>a2[j])
        {
            a2[j++];
        }
        else if(a1[i]<a2[j])
        {
            a1[i++];
        }
        else
        {
            cout<<a2[j]<<" ";
            i++;
            j++;
        }
    }
}
void printunion(int a1[],int a2[],int m,int n){
int i=0,j=0;

while(i<m && j<n)
{
   if(a1[i]>a2[j])
   {
    cout<<a1[j++]<<" ";
   }
   else if(a1[i]<a2[j])
   {
    cout<<a1[i++]<<" ";
   }
   else
   {
    cout<<a2[j++]<<" ";
    i++;
   }
}
while(i<m)
{
    cout<<a1[i++]<<" ";
}
while(j<n)
{
    cout<<a2[j++]<<" ";
}
}
int main()
{
    int m,n,i,j;
    cin>>m;
    int a1[m];
    for(i=0;i<m;i++)
    {
        cin>>a1[i];
    }
for(i=0;i<m;i++)
    {
        cout<<a1[i]<<" ";
    }
    cin>>n;
    int a2[n];
    for(j=0;j<n;j++)
    {
        cin>>a2[j];
    }
     for(j=0;j<n;j++)
    {
        cout<<a2[j]<<" ";
    }
    cout<<" \nUnion:"<<endl;
     printunion(a1,a2,m,n);
      cout<<" \nIntersection:"<<endl;
     printIntersection(a1,a2,m,n);

    return 0;

}

