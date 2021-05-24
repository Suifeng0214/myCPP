//Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e7;
int dp[N], arr[N];
signed main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	dp[0]=arr[0];
	dp[1]=max(arr[0], arr[1]);
	for (int i = 2; i < n; i++){
		dp[i] = max(dp[i-2]+arr[i], dp[i-1]);
	}
	cout << dp[n-1] << "\n";
}
