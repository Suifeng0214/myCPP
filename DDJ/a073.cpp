//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define EB emplace_back
const int N = 1e5+10;
int L[N], R[N], V[N];
long long owo[N];
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	vector <int> tmp;
	while (cin >> n){
		tmp.clear();
		memset(owo, 0, n);
		for (int i = 0; i < n; i++){
			cin >> L[i] >> R[i] >> V[i];
			R[i]++;
			tmp.EB(L[i]);
			tmp.EB(R[i]);
		}
		sort(tmp.begin(), tmp.end());
		tmp.resize(unique(tmp.begin(), tmp.end()) - tmp.begin());
		for (int i = 0; i < n; i++){
			L[i] = lower_bound(tmp.begin(), tmp.end(), L[i]) - tmp.begin() ;
			R[i] = lower_bound(tmp.begin(), tmp.end(), R[i]) - tmp.begin() ;
			owo[L[i]] += V[i];
			owo[R[i]] -= V[i];
		}
		long long ans = 0, now = 0;
		for (int i = 0; i < tmp.size(); i++){
			now += owo[i];
			ans = max(ans, now);
		}
		cout << ans << "\n";
	}
} 
 
