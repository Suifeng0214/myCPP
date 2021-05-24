#include <bits/stdc++.h>
using namespace std;
#define int long long
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
		int n, k;
		string s;
		cin >> n >> k;
		cin >> s;
		for (int i = 0; i < k; i++){
			int l, r;
			cin >> l >> r;
			l--, r--;
			bool flag = 0;
			for (int j = 0; j < l; j++){
				if (s[j] == s[l]){
					flag = 1;
					break;
				}
			}
			for (int j = r+1; j < n; j++){
				if (s[j] == s[r]){
					flag = 1;
					break;
				}
			}
			if (flag) cout << "YES\n";
			else cout << "NO\n";
		}
	}	
} 


