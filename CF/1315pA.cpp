#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	LL t;
	cin >> t;
	while(t--){
		LL a, b, x, y, i;
		cin >> a >> b >> x >> y;
		cout << max(a*max(abs(b-(y+1)), y), b*max(abs(a-(x+1)), x)) << "\n";
		//i = )
	}
} 

