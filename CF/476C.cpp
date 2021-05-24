#include <bits/stdc++.h>
#define int long long
#define mp(x, y) make_pair(x, y)
#define F first
#define S second
const int MOD = 1e9+7;
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b;
	cin >> a >> b;
	int sumB = b*(b-1)/2, sumA = (1+a)*a/2;
	sumB %= MOD, sumA %= MOD;
	cout << ((((sumB*sumA)%MOD)*b)%MOD + (sumB*a)%MOD)%MOD << "\n";
}
