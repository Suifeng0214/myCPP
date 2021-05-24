//Author: Suifeng0214
//2020.12.06
#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int MAX = 1e7+10;
int arr[MAX];
signed main()
{
	int q;
	cin >> q;
	int mx=0;
	while(q--){
		int a, b;
		cin >> a >> b;
		mx = max(mx, b);
		arr[a]++;
		arr[b]--;
	}
	int ans=0, now = 0;
	for (int i = 0; i <= mx; i++){
		now += arr[i];
		ans = max(now, ans);
		//arr[i] = now;
	}
	cout << ans << "\n";
} 
