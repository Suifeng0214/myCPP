//Author: Suifeng0214
//2020.07.02 20.52
#include <bits/stdc++.h>
#define int long long 
using namespace std;
int arr[100010];
int sum[100010];
signed main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, k;
	while(cin >> n >> k){
		int ans = 0;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			ans=max(ans, arr[i]);
		}
		sum[0] = arr[0];
		for (int i = 1; i < n; i++){
			sum[i] = sum[i-1] + arr[i];
		}
		//for (int i = 0; i < n; i++)cout << sum[i] << " ";
		
		for (int j = 2; j <= k; j++){
			ans = max(sum[j-1], ans);
			for (int i = j; i < n; i++){
				ans = max(ans, sum[i]-sum[i-j]); 
			}
		}
		cout << max(ans, (int)0) << "\n";
	}
}
