#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[3];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, n;
	cin >> q;
	while(q--){
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a+3);
		//cout << a[0] <<" "<< a[1]<<" " << a[2] << "\n";
		n -= (a[2]-a[1]) + (a[2]-a[0]);
		if (n%3 == 0 && n/3 >= 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
} 
