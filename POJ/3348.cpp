//Suifeng0214
//8:35
//8:40 finished  build convex_hull
//8:45 continue
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
#define int long long
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
#define PDD pair<double, double>
#define mid ((l+r)/2)
#define emplace_back push_back
//const int N = ;
vector <PII> pt, stk;
int cross(PII a, PII b, PII c){
	PII A = MP(b.X-a.X, b.Y-a.Y), B = MP(c.X-a.X, c.Y-a.Y);
	return A.X*B.Y-A.Y*B.X;
}
int area(){
	int res = 0;
	for (int i = 0; i < stk.size()-1; i++){
		res += stk[i].X*stk[i+1].Y;
		res -= stk[i].Y*stk[i+1].X;
	}
	return res;
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
	for (int i = pt.size()-2, t=top+1; i >= 0; i--){
		while(top >= t && cross(stk[top-2], stk[top-1], pt[i]) <= 0){
			top--;
			stk.pop_back();
		}
		top++;
		stk.emplace_back(pt[i]);
	}
//	for (auto i : stk) cout << i.X << " " << i.Y << "\n";
}
signed main() 
{ 
//	freopen("ans.txt", "w", stdout);
//	freopen("popcorn.in", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int x, y;
	for (int i = 0; i < n; i++){
		cin >> x >> y;
		pt.emplace_back(MP(x, y));
	}
	convex_hull();
	cout << area()/100 << "\n";
}