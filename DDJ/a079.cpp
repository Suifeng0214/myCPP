//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
priority_queue <int, vector<int>, greater<int>> pq_g;
queue <int> q;
signed main() 
{ 
//	freopen("in.txt", "r", stdin);
//	freopen("ans.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	while(cin >> n >> k){
		while(!q.empty()) q.pop();
		while(!pq_g.empty()) pq_g.pop();
		int tmp, mx=0;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			mx = max(tmp, mx);
			q.emplace(tmp);
		}
		if (k >= n){
			cout << mx << "\n";
			continue;
		}
		for (int i = 0; i < k; i++){
			pq_g.emplace(q.front());
			q.pop();
		}
		while(!q.empty()){
			int tmp = pq_g.top();
			pq_g.pop();
			pq_g.emplace(tmp + q.front());
			q.pop();
		}
		int ans = 0;
		while(!pq_g.empty()){
			ans = max(ans, pq_g.top());
			pq_g.pop();
		}
		cout << ans << "\n";
	}
}
