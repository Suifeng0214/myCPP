#include <bits/stdc++.h>
#define int long long
using namespace std;
map <string, bool> mp;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, cnt = 0;
	cin >> n;
	int ok = (n+3)/4;
	string tmp;
	while(cin >> tmp){
		if (tmp == "0") break;
		if (mp[tmp] == 0){
			cnt++;
			mp[tmp] = 1;
		}
		cout << max(ok-cnt, 0LL) << "\n";
	}
}
