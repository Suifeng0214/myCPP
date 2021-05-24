#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
vector <int> b;
set <int> st;
//map <int, int> mp;

signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		st.clear();
		a.clear();
		b.clear();
		int t;
		bool flag = 0;
		cin >> t;
		for (int i = 0; i < t; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		for (int i = 0; i < t; i++){
			int tmp;
			cin >> tmp;
			b.emplace_back(tmp);
		}
		for (int i = 0; i < t; i++){
			if (a[i] != b[i]){
				int goal = b[i] - a[i];
				bool find=0;
				for (int i : st){
					if (goal % i == 0){
						if (goal < 0 && i < 0 || (goal > 0 && i > 0))
						find=1;
					}
				}
				if (!find){
					flag = 1;
					break;
				}
			}
			if (a[i] != 0)
				st.insert(a[i]);
		}
		if (flag){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
} 
