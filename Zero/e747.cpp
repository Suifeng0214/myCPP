//Suifeng0214
//
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/stack:200000000")
#define int long long
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
#define PDD pair<double, double>
#define mid ((l+r)/2)
//const int N = ;
int n;
int nxt(int x){
	return ((x+1==n)? 0 : x+1);
}
vector < PII > pt, stk;
int cross(PII a, PII b, PII c){ //ok
	PII A = MP(b.X-a.X, b.Y-a.Y), B = MP(c.X-a.X, c.Y-a.Y);
	return A.X*B.Y-A.Y*B.X;
}
void convex_hull(){ //ok
	sort(pt.begin(), pt.end());
	int top = 0;
	for (int i = 0; i < pt.size(); i++){
		while(top >= 2 && cross(stk[top-2], stk[top-1], pt[i]) <= 0){
			top--;
			stk.pop_back();
		}
		top++;
		stk.emplace_back(pt[i]);
	}
	for (int i = pt.size()-2, t = top+1; i >= 0; i--){
		while(top >= t && cross(stk[top-2], stk[top-1], pt[i]) <= 0){
			top--;
			stk.pop_back();
		}
		top++;
		stk.emplace_back(pt[i]);
	}
//	for (auto i : stk) cout << i.X << " " << i.Y << "\n";
//	cout << "@\n";
}

int area(int a, int b, int c){
	auto A = stk[a], B = stk[b], C = stk[c];
	return abs(cross(A, B, C));
}
signed main() 
{ 
//	freopen("ans.txt", "w", stdout);
//	freopen("popcorn.in", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		pt.clear();
		stk.clear();
		cin >> n;
		int x, y;
		for (int i = 0; i < n; i++){
			cin >> x >> y;
			pt.emplace_back(x, y);
		}
		convex_hull();
		n = stk.size(); 
		int ans = 0;
		if (stk.size() == 4){
			ans = abs(cross(stk[0], stk[1], stk[2]));
			int mn=1e8;
			bool re=0;
			for (int i = 0; i < pt.size()-1; i++){
				if (pt[i] == pt[i+1] && 
					(pt[i] == stk[0] || 
					 pt[i] == stk[1] || 
					 pt[i] == stk[2])){
					re = 1;
					break;
				}
			}
			if (!re){
				for (auto i : pt){
					if (i == stk[0] || i == stk[1] || i == stk[2]) continue;
					mn = min({mn, abs(cross(i, stk[1], stk[2])), 
								  abs(cross(i, stk[2], stk[0])),
								  abs(cross(i, stk[0], stk[1]))});
				}
				ans -= mn;
			}
		}else if (stk.size() > 4){
			for (int i = 0; i < n; i++){
				int k1 = nxt(i), k2 = nxt(nxt(nxt(i)));
				for (int j = nxt(nxt(i)); nxt(j) != i; j=nxt(j)){
					if (j==k2) k2 = nxt(k2);
					while(nxt(k1) != j && area(i, k1, j) < area(i, nxt(k1), j)){
						k1 = nxt(k1);
					}
					while(nxt(k2) != i && area(i, j, k2) < area(i, j, nxt(k2))){
						k2 = nxt(k2);
					}
					ans = max(area(i, k1, j) + area(i, j, k2), ans);
				}
			}
		}
		cout << ans/2 << ((ans&1)? ".5\n" : "\n");
	}
}
