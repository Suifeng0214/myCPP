#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//vector <int> a;
	int q, t, tmp, day, ans=0, n;
	string a, b, c;
	cin >> q;
	while(q--){
		bool flag = 0;
		cin >> a >> b >> c;
		for (int i = 0; i < c.size(); i++){
			if (a[i] == c[i] || b[i] == c[i]) continue;
			else{
				flag = 1;
				break;
			}
		}
		if (flag == 1){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
	return 0;
} 
