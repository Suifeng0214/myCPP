#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
int tt[100] = {1};
int two[100] = {1};
signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	for (int i = 1; i <= 33; i++){
		tt[i] = tt[i-1] * 2;
	}
	for (int i = 1; i <= 33; i++){
		two[i] = two[i-1] + tt[i];
	}
	while(q--){
		a.clear();
		int n;
		cin >> n;
		int nowMax=-2147483649, m=-2147483649;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
			nowMax = max(tmp, nowMax);
			if (tmp-nowMax < 0){
				m = max(abs(tmp-nowMax), m);
			}
		}
		//cout << m << "@\n";
		for (int i = 0; i <= 33; i++){
			if (two[i] == m){
				cout << i+1 << "\n";
				break;
			}
			if (two[i] < m && m <= two[i+1]){
				//cout << m;
				cout << i+1+1 << "\n";
				break;
			}
		}
		if (m == -2147483649) cout << 0 << "\n";
	}
} 


