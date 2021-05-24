#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
const int N = 2e5+10;
int cnt[N];
int dp[N];
int pos[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		memset(cnt, 0, sizeof(cnt));
		a.clear();
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		sort(a.begin(),a.end());
		for (int i : a) cout << i << " " ;
		cout << "\n";

		for (int i = 0; i < n-2; i++){
			auto it1 = lower_bound(a.begin(), a.end(), a[i]);
		   	auto it2 = upper_bound(a.begin(), a.end(), a[i]+2);
			int now = it2-it1-2;
			int temp = now;
			if (dp[a[i]] == 0) dp[a[i]] = now, pos[a[i]] = i;
			else{
				temp = dp[a[i]] - (i - pos[a[i]]);
			}
			cout << temp << "\n";
		}
	}
}
