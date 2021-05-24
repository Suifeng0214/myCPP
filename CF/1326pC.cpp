#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> ;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	int last=-1, ans = 1;
	for (int i = 1; i <= n; i++){
		int tmp;
		cin >> tmp;
		if (n-k < tmp && tmp <= n){
			if (last==-1){
				last=i;
				continue;
			}
			ans *= i-last;
			ans%=998244353;
			last=i;
		}
	}
	cout << (2*n-k+1)*k/2 << " " << ans%998244353 << "\n";
}


