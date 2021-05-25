//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
int a[4800000];
int now, l, r;
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k, cnt=0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int now = 0, ans = 1;
	for (int i = 1; i <= n; i++){
		while(ans<=n&&now + a[ans] <= k){
			now += a[ans++];
		}
		cout << ans-1 << " \n"[i==n];
		now -= a[i];
	}
}
