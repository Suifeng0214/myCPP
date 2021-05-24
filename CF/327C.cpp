#include <bits/stdc++.h>
#define int long long
#define mp(x, y) make_pair(x, y)
#define F first
#define S second
const int MOD = 1e9+7;
using namespace std;
int poww(int a, int b){
	int ret = 1;
	for (;b;b>>=1){
		if (b&1)
			ret *= a;
		ret%=MOD;
		a*=a;
		a%=MOD;
	}
	return ret;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string tmp, s;
	int k, r;
	cin >> s >> k;
	r = poww(2, s.size());
	int now = 0;
	int a = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '0' || s[i] == '5')
			a += poww(2, now);
		a %= MOD;
		now++;
	}
	cout << ((a*(poww(r, k)-1))%MOD * poww((r-1), MOD-2))%MOD << "\n";
}
