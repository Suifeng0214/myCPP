#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;

signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		bool flag = 0;
		int la=-1, lb=-1;
		for (int i = 0; i < n ; i++){
			int a, b;
			cin >> a >> b;
			if (la > a || b > a || lb > b || b-lb > a-la) flag = 1;
			//if (flag) break;
			la = a;
			lb = b;
		}
		if (flag){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
} 
