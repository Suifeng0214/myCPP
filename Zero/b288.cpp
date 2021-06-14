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
vector < PDD > pt, stk;
int cross(PDD a, PDD b, PDD c){
	PDD A = MP(b.X-a.X, b.Y-a.Y), B = MP(c.X-a.X, c.Y-a.Y);
	return A.X*B.Y - A.Y*B.X;
}
void convex_hull(){
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
	//for (auto i : stk) cout << i.X << " " << i.Y << "\n";
}

double area(int a, int b, int c){
	auto A = stk[a], B = stk[b], C = stk[c];
	vector < PDD > tmp;
	tmp.emplace_back(A);
	tmp.emplace_back(B);
	tmp.emplace_back(C);
	tmp.emplace_back(A);
	double ret = 0;
	for (int i = 0; i < 3; i++){
		ret += tmp[i].X*tmp[i+1].Y;
		ret -= tmp[i].Y*tmp[i+1].X;
	}
	return ret/2;
}
signed main() 
{ 
//	freopen("ans.txt", "w", stdout);
//	freopen("popcorn.in", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	double x, y;
	for (int i = 0; i < n; i++){
		cin >> x >> y;
		pt.emplace_back(x, y);
	}
	convex_hull();
	double ans = 0;
	n = stk.size();
	for (int i = 0; i < n; i++){
		for (int j = (i+1)%n, k = (i+2)%n; j < n-1; j++){
			while(area(i, j, k) < area(i, j, (k+1)%n)){
				k++;
				k%=n;
			}
			ans = max(ans, area(i, j, k));
		}
	}
	cout << fixed << setprecision(6) << ans << "\n";
}
