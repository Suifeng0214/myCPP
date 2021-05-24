//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
set <string> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	int tmp;
	for (int i = 0; i < n ; i++){
		cin >> tmp;
		a.emplace_back(tmp);
	}
	sort(a.begin(), a.end());
	int x=-1, y=110;
	for (int i = 0 ; i < n; i++){
		if (a[i] < k) x=max(x, a[i]);
		if (a[i] >= k) y=min(y, a[i]);
	}
	for (int i : a) cout << i << " ";
	cout << "\n";
	cout << ((x==(int)-1)? "Easy Test!" : to_string(x)) << "\n";
	cout << ((y==(int)110)? "Hard Test!" : to_string(y)) << "\n";
} 


