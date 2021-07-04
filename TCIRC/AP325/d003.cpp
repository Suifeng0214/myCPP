//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define mid ((l+r)/2)
vector <int> a;
//set <int> st;
//map <int, int> mp;
int ans = 0;
void cut(int len, int l, int r){
	cerr << len  <<" "<< l << " " << r<< "\n";
	int mn=1e18, loc=-1;
	loc = lower_bound(a.begin(), a.end(), mid)-a.begin();

//	cerr << loc << "\n";
	if (a[loc] > r || a[loc] <= l) return;
	loc = min(a[loc-1], a[loc]);
	ans += len;
	cut(loc-l, l, loc);
	cut(r-loc, loc, r);
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, len;
	cin >> n >> len;
	int tmp;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		a.emplace_back(tmp);
	}
//	auto x = lower_bound(a.begin(), a.end(), 7) - a.begin();
//	cout << x << "@\n";
	cut(len, 0, len);
	cout << ans << "\n";
} 


