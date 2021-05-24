#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <pair<int, int>> a;
vector <int> ans;
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
		a.clear();
		ans.clear();
		int n, w;
		cin >> n >> w;
		bool yes=0;
		for (int i = 1; i <= n; i++){
			int tmp;
			cin >> tmp;
			if (yes==0)
			if ((w+1)/2 <= tmp && tmp <= w){
				cout << "1\n" << i << "\n";
				yes=1;
			}
			a.emplace_back(tmp, i);
		}
		if (yes) continue;
		sort(a.begin(), a.end());
		int now = 0;
		bool flag = 0;
		for (int i = 0; i < n; i++){
			now += a[i].first;
			ans.emplace_back(a[i].second);
			if ((w+1)/2 <= now && now <= w){
				cout << ans.size() << "\n";
				for (int j = 0; j < ans.size(); j++){
					cout << ans[j] << " ";
				}
				cout << "\n";
				flag = 1;
				break;
			}
			if (now > w){
				cout << "-1\n";
				flag = 1;
				break;
			}
		}
		if (flag) continue;
		if (now < (w+1)/2){
			cout << "-1\n";
		}
	}	
} 
