#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int l, r, d, now=0;
	string tmp;
	cin >> l >> tmp; 
	if (tmp == "km") l*=1000;
	cin >> r >> tmp;
	if (tmp == "km") r*=1000;
	cin >> d >> tmp;
	if (tmp == "km") d*=1000;
	int ans = 0;
	while(now < l){
		now += r;
		ans += 30;
		//cout << "ans++\n";
		if (now >= l){
			cout << ans << "\n";
			break;
		}
		now -= d;
		//cout << "ans--\n";
		ans += 5;
	}
}
