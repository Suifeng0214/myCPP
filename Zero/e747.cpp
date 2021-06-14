//Suifeng0214
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
#define PDD pair<double, double>
#define mid ((l+r)/2)
//const int N = ;
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

double area(int a, int b, int c){
	auto A = stk[a], B = stk[b], C = stk[c];
	vector < PII > tmp;
	tmp.emplace_back(A);
	tmp.emplace_back(B);
	tmp.emplace_back(C);
	tmp.emplace_back(A);
	double res = 0;
	for (int i = 0; i < 3; i++){
		res += tmp[i].X * tmp[i+1].Y;
		res -= tmp[i].Y * tmp[i+1].X;
	}
	return res/2;
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
		int n;
		cin >> n;
		int x, y;
		for (int i = 0; i < n; i++){
			cin >> x >> y;
			pt.emplace_back(x, y);
		}
		convex_hull();
		n = stk.size(); 
		if (stk.size() <= 3) {
			cout << "ouo";
			return 0;
		}
		double ans = 0;
		for (int i = 0; i < n-2; i++){
			int k1 = i+1, k2 = (i+n-1)%n;
			for (int j = (i+2)%n; j < n-1; j++){
				while(k1 < j && area(i, k1, j) < area(i, (k1+1)%n, j)){
					k1 = (k1+1)%n;
				}
				while(k2 > j && area(i, j, k2) < area(i, j, (k2-1+n)%n)){
					k2 = (k2-1+n)%n;
				}
				ans = max(area(i, k1, j) + area(i, j, k2), ans);
			}
		}
		cout << ans << "\n";
	}
}
