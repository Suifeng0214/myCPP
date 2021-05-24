//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
const int N = 1e5+10;
int n;
vector <int> BIT;
//int y_inv[N];
int query(int x){
	int ret = 0;
	for (; x > 0; x -= lowbit(x)){
		ret += BIT[x];
	}
	return ret;
}
void update(int x, int val){
	for (; x <= n; x += lowbit(x)){
		BIT[x] += val;
	}
}
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	vector <pair<int, int>> mp, sortmp;
	vector <int> ax, ay, tx, ty;
	while (cin >> n && n){
		BIT.resize(n+1);
		multiset <int> st[n+1];
		for (int i = 1; i <= n; i++){
			int a, b;
			cin >> a >> b;
			ax.emplace_back(a);
			ay.emplace_back(b);
			tx.emplace_back(a);
			ty.emplace_back(b);
		}
		sort(tx.begin(), tx.end());
		sort(ty.begin(), ty.end());
		tx.resize(unique(tx.begin(),tx.end())-tx.begin());
		ty.resize(unique(ty.begin(),ty.end())-ty.begin());
		for (int i = 0; i < n; i++){
			int tmpx = lower_bound(tx.begin(), tx.end(), ax[i])-tx.begin()+1;
			int tmpy = lower_bound(ty.begin(), ty.end(), ay[i])-ty.begin()+1;
			mp.emplace_back(tmpx, tmpy);
	//		cout << tmpx << "@" << tmpy << "\n";
		}
		sortmp = mp;
		sort(sortmp.rbegin(), sortmp.rend());
		//initBIT
		unordered_map <pair<int ,int>, int, hash_pair> y_inv;
		for (int i = 0; i < n; i++){
			int tmpx = sortmp[i].X;
			int tmpy = sortmp[i].Y;
			st[tmpx].insert(tmpy);
		//	cout << tmpy << "@"<< query(tmpy) << endl;
			update(tmpy, 1);
			y_inv[MP(tmpx, tmpy)] = (i+1) - query(tmpy);
		}
		for (int i = 0; i < n; i++){
			int ask_x = mp[i].X, ask_y = mp[i].Y;
			int cnt = 0;
			for (auto j : st[ask_x]){
				if (j > ask_y) break;
				cnt++;
			}
//			cout << st[ask_x].size() << "@" << cnt << endl;
			cout << y_inv[MP(ask_x, ask_y)] - ((int)st[ask_x].size()-cnt)  << "\n";
		}
		
		if (n){
		//	memset(BIT, 0, sizeof BIT);
			BIT.clear();
			mp.clear();
			y_inv.clear();
			sortmp.clear();
			ax.clear(), ay.clear();
			tx.clear(), ty.clear();
		}
	}
} 
 
