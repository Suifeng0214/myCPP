//Suifeng0214
//11:30
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
const int N = 1e5+10;
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	while(cin >> n){
		vector <int> a(n);
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int sum = 0, ans = 0;
		for (int i = 0; i < n; i++){
			sum += a[i];
			ans += sum;
		}
		cout << ans << "\n";
	}
}
