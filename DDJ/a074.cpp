//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define EB emplace_back
const int N = 1e7+1;
int a[N];
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	while (cin >> n >> k){
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		int l=1, r=1, now=0, ans=0;
		while(l<=r){
			cout << l << " " << r << " " << now <<  endl;
			if (now < k){
				now += a[r++];
				if (r==n+1 && now <= k){
					if (now==k) ans++;
					break;
				}
			}else{
				if (now == k) ans++;
				now -= a[l++];
				if (l==n+1) break;
			}
		}
		cout << ans << "\n";
	}
} 
 
