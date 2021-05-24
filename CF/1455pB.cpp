//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	int now = 0;
	for (int i = 1; i < 1000000; i++) a.emplace_back(now), now+=i;

 	while(q--){
		int n;
		cin >> n;
		auto it = lower_bound(a.begin(),a.end(), n)-a.begin();
		if (a[it]-1 == n)
			cout << it+1 << "\n";
		else 
			cout << it << "\n";
	}	
} 


