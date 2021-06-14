//Suifeng0214
//8:58
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
#define mid ((l+r)/2)
//const int N = ;
vector < PII > pt, stk;
int cross(PII a, PII b, PII c){
	PII A = MP(b.X-a.X, b.Y-a.Y), B = MP(c.X-a.X, c.Y-a.Y);
	return A.X*B.Y-A.Y*B.X;
}
int cnt(){
	int sum = 0;
	for (int i = 0; i < stk.size()-1; i++){
		sum += stk[i].X*stk[i+1].Y;
		sum -= stk[i].Y*stk[i+1].X;
	}
	return (sum+1)/2;
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
		pt.clear(), stk.clear();
		int n;
		cin >> n;
		pt.emplace_back(0, 0);
		for (int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			pt.emplace_back(x, y);
		}
		sort(pt.begin(), pt.end());
		int top = 0;
		for (int i = 0; i < pt.size(); i++){
			while(top >= 2 && cross(stk[top-2], stk[top-1], pt[i]) <= 0){
				top--;
				stk.pop_back();
			}
			stk.emplace_back(pt[i]);
			top++;
		}
		for (int i = pt.size()-2, t = top+1; i >= 0; i--){
			while(top >= t && cross(stk[top-2], stk[top-1], pt[i]) <= 0){
				top--;
				stk.pop_back();
			}
			stk.emplace_back(pt[i]);
			top++;
		}
		int tmp, mx=0;
		for (int i = 0; i < 11; i++){
			cin >> tmp;
			mx = max(mx, tmp);
		}
		for (auto i : stk) cout << i.X << " " << i.Y << "\n";
		cout << "@\n";
//		cout << cnt() << "\n";
		if (cnt() > mx) cout << "nice\n";
		else cout << "sleep\n";
	}
}
