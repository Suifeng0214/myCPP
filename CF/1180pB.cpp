//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	if (n==1){
		int x;
		cin >> x;
		cout << max(x, -x-1) << "\n";
		return 0;
	}
	int cnt=0;
	int ans = 1;
	vector <pair<int ,int>> a, tmpa;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		if (tmp < 0){
			cnt++;
			a.emplace_back(tmp, i);
//			ans *= abs(tmp+1);
//			cout << abs(tmp+1);
			continue;
		}
		if (tmp == 0){
			a.emplace_back(-1, i);
			cnt++;
			continue;
		}else{
			a.emplace_back(-tmp-1, i);
			cnt++;
		}
	}
	tmpa = a;
	if (cnt&1){
		sort(tmpa.begin(), tmpa.end());
		if (tmpa[tmpa.size()-1].F > 0){
			a[tmpa[tmpa.size()-1].S].F *= -1;
			a[tmpa[tmpa.size()-1].S].F--;
		}else{
			a[tmpa[0].S].F *= -1;
			a[tmpa[0].S].F--;
		}
	}
	for (auto i : a) cout << i.F << " ";
} 


