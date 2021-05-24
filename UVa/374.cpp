#include <bits/stdc++.h>
#define int long long 
using namespace std;
int pow(int a, int b, int c){
	int ret = 1;
	for (;b;b>>=1){
		if (b&1)
			ret *= a, ret%=c;
		a*=a;
		a%=c;
	}
	return ret;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	while(cin >> a >> b >> c){
		cout << pow(a, b, c) % c << "\n";
	}
}
