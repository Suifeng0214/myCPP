#include<bits/stdc++.h>
#define X first
#define Y second
#define int long long
#define PII pair<int, int>
#define MP make_pair
using namespace std;
//10:23
vector < PII > pt, stk;
int cross(PII a, PII b, PII c){
	PII A = MP(b.X-a.X, b.Y-a.Y), B = MP(c.X-a.X, c.Y-a.Y);
	return A.X*B.Y-A.Y*B.X;
}
void convex_hull(){
	sort(pt.begin(), pt.end());
	int top=0;
	for (int i = 0; i < pt.size(); i++){
		while(top>=2 && cross(stk[top-2], stk[top-1], pt[i]) <= 0){
			top--;
			stk.pop_back();
		}
		top++;
		stk.emplace_back(pt[i]);
	}
	for (int i = pt.size()-2, t=top+1; i >= 0; i--){
		while(top>=t && cross(stk[top-2], stk[top-1], pt[i]) <= 0){
			top--;
			stk.pop_back();
		}
		top++;
		stk.emplace_back(pt[i]);
	}
//	for (auto i : stk) cout << i.X << " " << i.Y << "@\n";
//	stk.pop_back();
}
signed main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		pt.clear();
		stk.clear();
		int ox, oy;
		cin >> ox >> oy;
		for (int i = 0; i < 3; i++){
			PII tmp;
			cin >> tmp.X >> tmp.Y;
			pt.emplace_back(tmp);
		}
		convex_hull();
		bool ans = 1;
		PII O = MP(ox, oy);
		for (int i = 0; i < 3; i++){
			if (cross(stk[i], stk[i+1], O) <= 0){
				ans = 0;
				break;
			}
		}
		cout << ((ans)? "YES\n" : "NO\n");
	}
}
