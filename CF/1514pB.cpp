//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
const int MOD = 1e9+7;
int poww(int a, int b){
	int ret = 1;
	for (;b; b>>=1){
		if (b&1) ret*=a;
		a*=a;
		ret%=MOD;
		a%=MOD;
	}
	return ret;
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n, k;
		cin >> n >> k;
		cout << poww(n, k) << "\n";
		continue;
		int sum = 1;
		for (int i = 0; i < k; i++){
			sum *= (n-i);
			sum %= MOD;
		}
		sum += n;
		cout << sum%MOD << "\n";
	}
} 


