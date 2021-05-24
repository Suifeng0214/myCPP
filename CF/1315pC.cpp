#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	LL t, tmp, n;
	vector <LL> a(210);
	map <LL, LL> mp;
	cin >> t;
	while(t--){
		cin >> n;
		mp.clear();
		a.clear();
		a.resize(210);
		bool flag = 0;
		for (int i = 0; i < 2*n; i+=2){
			cin >> tmp;
			a[i] = tmp;
			mp[tmp]++;
		}
		for (int i = 1; i < 2*n; i+=2){
			LL j = 1;
			while(j < 2*n){
				if (a[i-1] + j > 2*n){
						flag=1;
						break;
				}
				if (mp[a[i-1] + j] == 0){
					mp[a[i-1] + j] = 1;
					a[i] = a[i-1] + j;
					break;
				}else{
					j++;
					
				}
			}
			if (flag) break;
		}
		if (flag){
			cout << -1 << "\n";
		}else{
			for (int i = 0; i < 2*n; i++){
				cout << a[i] << " ";
			}
			cout << "\n";
		}
	}
} 

