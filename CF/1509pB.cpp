//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
bitset <100010> used;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector <int> T, M;
		for (int i = 0; i < n; i++){
			if (s[i] == 'T'){
				T.emplace_back(i);
			}else{
				M.emplace_back(i);
			}
		}
		bool flag = 1;
		if (T.size() != 2*M.size()) flag = 0;
		for (int i = 0; i < M.size(); i++){
			if (T[i] > M[i] || M[i] > T[M.size() + i]){
				flag = 0;
				break;
			}
		}
		cout << ((flag)? "YES\n" : "NO\n");
	}
} 


