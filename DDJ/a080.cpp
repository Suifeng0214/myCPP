//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define mid ((l+r)/2)
const int N = 1e5+5;
int n;
int t[N], d[N];

bool chk(int x, int mx_dline){
	queue <pair<int, int> > q;
	priority_queue <int, vector<int>, greater<int> > pq_g;
	for (int i = 0; i < n; i++){
		q.emplace(t[i], d[i]);
	}
	for (int i = 0; i < x; i++){
		if (!q.empty()){
			pq_g.emplace(q.front().F);
			q.pop();
		}
	}
	while(!q.empty()){
		int tmp = pq_g.top();
		if (tmp+q.front().F > q.front().S) return false;
		pq_g.pop();
		pq_g.emplace(tmp + q.front().F);
		q.pop();
	}
	int res = 0;
	while (!pq_g.empty()){
		res = max(res, pq_g.top());
		pq_g.pop();
	}
	//cout << res << "@" << endl;
	if (res <= mx_dline){
		return true;
	}else return false;
}
signed main() 
{ 
	freopen("in.txt", "r", stdin);
	freopen("ans.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	while(cin >> n){
		if (n==0) break;
		int mx_dline = 0;
		bool fail=0;
		for (int i = 0; i < n; i++){
			cin >> t[i];
		}
		for (int i = 0; i < n; i++){
			cin >> d[i];
			if (t[i] > d[i]) fail = 1;
			mx_dline = max(mx_dline, d[i]);
		}
		if (fail){
			cout << "-1\n";
			continue;
		}
		int l = 0, r=n;
		while(l+1<r){
			if (chk(mid, mx_dline) == 1){
				r = mid;
			}else{
				l = mid;
			}
		}
		cout << r-1 << "\n";
	}
}
