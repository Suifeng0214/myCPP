//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	vector <pair<int, int> > arr;
	while(q--){
		arr.clear();
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int l, r;
			cin >> l >> r;
			arr.emplace_back(l, r);
		}
		sort(arr.begin(), arr.end());
		int a = arr[0].F, b = arr[0].S, ans = 1;
		for (int i = 1; i < n; i++){
			if (arr[i].F >= b){
				a = arr[i].F;
				b = arr[i].S;
				ans++;
			}else if (arr[i].S < b){
				a = arr[i].F;
				b = arr[i].S;
			}
		}
		cout << ans << "\n";
	}
}
