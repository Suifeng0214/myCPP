#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
vector <pair<int, int>> arr;
vector <pair<int, int>> used;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int s, e;
	cin >> s >> e;
	used.emplace_back(s, e);
	int ans = 1;
	for (int i = 1; i < n; i++){
		cin >> s >> e;
//		arr.emplace_back(s, e);
		bool find = 0;
		for (int j = 0; j < used.size(); j++){
			if (s > used[j].second ){
				used.erase(used.begin()+j);
				used.emplace_back(s, e);
				find = 1;
				break;
			}
		}
		if (!find){
			ans++;
			used.emplace_back(s, e);
		}
	}
	cout << ans << "\n";
//	sort(arr.begin(), arr.end());
//	for (auto i : used) cout << i.first << " " << i.second << "\n";
} 


