
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mid ((l+r)/2)
#define F first
#define S second
int cnt[100010];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		memset(cnt, 0, sizeof cnt);
		int n, m;
		cin >> n >> m;
		int ans = 0;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			if (tmp%m==0){
				if (cnt[0] == 0){
				   	ans++, cnt[0]++;
				//	cout << tmp << "@";
				}
				continue;
			}
			if (m%2==0 && tmp%m == m/2){
				if (cnt[tmp%m] == 0){
				   	ans++, cnt[tmp%m]++;
				//	cout << tmp << "@";
				}
				continue;
			}
//			if (cnt[tmp%m]==0 && cnt[m-tmp%m]==0) ans++;
			cnt[tmp%m]++;
			if (cnt[tmp%m] - cnt[m-tmp%m] > 1){
				ans++;
				//cout << tmp << "@";
			}else if (cnt[m-tmp%m]==0){
			   	ans++;
				//cout << tmp << "@";
			}else if (cnt[m-tmp%m] - cnt[tmp%m]>=1) ans--;

		}
		cout << ans << "\n";
	}
}

