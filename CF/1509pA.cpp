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
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		vector <int> a;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			if (tmp&1) tmp += 0x3f3f3f3f;
			a.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++){
			cout << ((a[i] > 0x3f3f3f3f)? a[i]-0x3f3f3f3f : a[i]) << " ";
		}
		cout << "\n";
	}	
} 


