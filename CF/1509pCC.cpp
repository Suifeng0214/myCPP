//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
unordered_map <int, int> mp;
const int MX = 1000000000000000000;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		a.emplace_back(tmp);
		mp[tmp]++;
	}	
	sort(a.begin(), a.end());

	int x, y=0;
	for (auto i : mp){
		if (i.S > y){
			x = i.F;
			y = i.S;
		}
	}
	vector <int> ans;
	for (int i = 0; i < y; i++){
//		cout << x << " ";
		ans.emplace_back(x);
	}
	int idx1 = upper_bound(a.begin(), a.end(), x) - a.begin();
	int idx2 = lower_bound(a.begin(), a.end(), x) - a.begin();
	for (int i = idx1; i < n; i++){
		if (a[i] != x){
			ans.emplace_back(a[i]);
		}
	}
	for (int i = idx2-1; i>=0; i--){
		if (a[i] != x){
			ans.emplace_back(a[i]);
		}
	}
//	for (int i : ans) cout << i << " ";
	//cout << "\n";
	int mx=ans[0], mn=ans[0], tmpANS=0;
	for (auto i : ans){
		if (i > mx) mx = i;
		if (i < mn) mn = i;
		tmpANS += mx-mn;
	}
//	ANS = min(ANS, tmpANS);
	cout << tmpANS << "\n";
} 


