#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int p, f;
		cin >> p >> f;
		int rich= max(p, f), poor=min(p, f);
		int cnt1, cnt2;
		cin >> cnt1 >> cnt2;

		int s, w;
		cin >> s >> w;
		int chp=min(s, w), exp=max(s, w);
		if (s == w) cnt1 += cnt2;
		int ans=0;
		int sum1;
		if (chp == s){
			int tmp = cnt1;
			ans += min(rich/s, cnt1);
			cnt1 -= min(rich/s, tmp);
			rich -= s*min(rich/s, tmp);
			if (cnt1 > poor/s && poor/s){
				tmp = cnt1;
				ans += min(poor/s, cnt1);
				cnt1 -= min(poor/s, tmp);
				poor -= s*min(poor/s, tmp);
			}
		}else{
			int tmp = cnt2;
			ans += min(rich/w, cnt2);
			cnt2 -= min(rich/w, tmp);
			rich -= w*min(rich/w, tmp);
			if (cnt2 > poor/w && poor/w){
				tmp = cnt2;
				ans += min(poor/w, cnt2);
				cnt2 -= min(poor/w, tmp);
				poor -= w*min(poor/w, tmp);
			}
		}
		cout << rich << "@" <<poor << "\n"; 
		poor += rich;

		if (exp == s){
			if (cnt1 > poor/s && poor/s){
//				cnt1 -= poor/s;
				ans += poor/s;
//				poor -= s*(poor/s);
			}
		}else{
			if (cnt2 > poor/w && poor/w){
//				cnt2 -= poor/w;
				ans += poor/w;
//				poor -= w*(poor/w);
			}
		}
		cout << ans << "\n";
	}	
} 


