//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
const int MX = 1000000000000000000;
unordered_map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cout << MX << endl;
	int n;
	cin >> n;
	vector <int> a, b;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		a.emplace_back(tmp);
	}	
	
	sort(a.begin(), a.end());
	
	int mx=a[0], mn=a[0], tmpANS=0, ANS=MX;
	
	for (auto i : a){
		if (i > mx) mx = i;
		if (i < mn) mn = i;
		tmpANS += mx-mn;
	}
	ANS = min(ANS, tmpANS);
	
	mx=a[n-1], mn=a[n-1], tmpANS=0;
	for (int i = n-1; i >= 0; i--){
		if (i > mx) mx = i;
		if (i < mn) mn = i;
		tmpANS += mx-mn;
	}
	ANS = min(ANS, tmpANS);
	
	for (int i = 0; i < n; i++){
		mp[a[i]]++;
	}
	int x, y=0;
	for (auto i : mp){
		if (i.S > y){
			x = i.F;
			y = i.S;
		}
	}
	vector <int> ans, ans2;
	for (int i = 0; i < y; i++){
//		cout << x << " ";
		ans.emplace_back(x);
	}
	ans2 = ans;
	for (int i = n-1; i>=0; i--){
		if (a[i] != x){
//			cout << a[i] << " ";
			ans.emplace_back(a[i]);
		}
	}
	mx=ans[0], mn=ans[0], tmpANS=0;
	for (auto i : ans){
		if (i > mx) mx = i;
		if (i < mn) mn = i;
		tmpANS += mx-mn;
	}
	ANS = min(ANS, tmpANS);
	//////////////////////////////////////
	for (int i = 0; i < n; i++){
		if (a[i] != x){
			ans2.emplace_back(a[i]);
		}
	}
	mx=ans2[0], mn=ans2[0], tmpANS=0;
	for (auto i : ans2){
		if (i > mx) mx = i;
		if (i < mn) mn = i;
		tmpANS += mx-mn;
	}
	ANS = min(ANS, tmpANS);
	cout << ANS << "\n";
} 


