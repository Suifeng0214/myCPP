#include <iostream>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int ans = 0;
		for (int i = 0; i < 2*n; i++){
			int a, b;
			cin >> a >> b;
			ans = max(abs(a-b), ans);
		}
		cout << ans << "\n";
	}
}
