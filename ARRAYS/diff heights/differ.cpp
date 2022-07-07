/*
4 3
1 5 15 10
8

*/

#include <bits/stdc++.h>
using namespace std;
int minimize(int a[], int n, int k)
{
	sort(a,a + n);
	int ans =a[n - 1] -a[0]; 
    int minof, maxof;
	minof =a[0];
	maxof =a[n - 1];
    for (int i = 1; i < n; i++) {
		if(a[i] - k < 0) 
		continue;
		minof= min(a[0] + k,a[i] - k); 
		maxof = max(a[i - 1] + k,a[n - 1] - k); 
		ans = min(ans, maxof - minof);
	}
	return ans;
}

int main()
{
	int n,i,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
	int ans = minimize(a, n, k);
	cout << ans;
}
