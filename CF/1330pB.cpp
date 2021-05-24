#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
vector <pair<int, int>> ans;
set <int> st;
set <int> st1;
set <int> st2;
//map <int, int> mp;

signed main() 
{ 
	ios::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	while(n--){
		st.clear();
		st1.clear();
		st2.clear();
		ans.clear();
		a.clear();
		int t, m=-1;
		cin >> t;
		for (int i = 0; i < t; i++){
			int tmp;
			cin >> tmp;
			//st.insert(tmp);
			a.emplace_back(tmp);
		}
		
		bool flag=0;
		for (int i = 0; i < t; i++){
			st2.clear();
			//if (!st1.count(a[i])){
				st1.insert(a[i]);
				m = max(a[i], m);
				
				if (i+1==m)
					for (int j = 1; j <= i+1; j++){
						if (!st1.count(j)){
							flag = 1;
							break;
						}
						for (int k = i+1; k < t; k++){
							st2.insert(a[k]);
						}
					}
				else continue;
				if (flag){
					flag = !flag;
					continue;
				}
				for (int j = 1; j <= st2.size(); j++){
					if (!st2.count(j)) break;
					if (j == st2.size()){
						if (st1.size() + st2.size() == t)
							ans.emplace_back(st1.size(), st2.size());
					}	
				}
				st2.clear();
			//}
		}
		cout << ans.size() << "\n";
		if (ans.size())
		for (int i = 0; i < ans.size(); i++){
			cout << ans[i].first << " " << ans[i].second << "\n";
		}
	}
} 
