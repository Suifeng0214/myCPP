//Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans = 0;
int dp[(int)1e7];

int f(int x){
	int ret = 0;
	for (int i = 2; i <= x; i++){
	/*	if (dp[i] != -1){
		   	ret += dp[i];
			continue;
		}*/
		int tmp = x;
		int now = 0;
		while(tmp/i){
			tmp /= i;
			now++;
		}
		//dp[i] = now;
		ret += now;
	}
	return ret;
}

/*
int f(int x){
//	if (dp[x] != 0) return dp[x];
	int ret = 0;
	for (int i = 1; i <= x; i++){
		cout << cal(i) << "@\n";
		ret += cal(i);
	}
	return ret;
//	return f(x-1);	
}
*/
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	for (int i = 1; i <= n; i++){
		ans += f(i);
	}
	cout << ans << "\n";
} 


