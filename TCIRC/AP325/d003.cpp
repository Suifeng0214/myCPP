//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define mid (((double)l+r)/2)
vector <int> a;
//set <int> st;
//map <int, int> mp;
long long ans = 0, n, k;
void cut(int l, int r){
	int len = r-l;
	if (len <= 1) return;
//	cerr << len  <<" "<< l << " " << r<< "\n";
	int loc = lower_bound(a.begin(), a.end(), mid)-a.begin();
//	cerr << loc << "@\n";
	if ((loc == n || a[loc] >= r) && (loc==0 || a[loc-1] <= l)) return;
	if (loc == 0 || loc == n){
		loc = ((loc==0)? a[0] : a[n-1]);
	}else{
		if (fabs(a[loc-1] - mid) <= fabs(a[loc] - mid)){
			loc = a[loc-1];
		}else{
			loc = a[loc];
		}
	}
	ans += len;
	cut(l, loc);
	cut(loc, r);
}
signed main() 
{ 
//	freopen("in.txt", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> k;
	int tmp;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		a.emplace_back(tmp);
	}
	cut(0, k);
	cout << ans << "\n";
}
