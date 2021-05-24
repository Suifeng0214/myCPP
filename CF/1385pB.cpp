//Author: Suifeng0214
//2020.7.17 22:54 
#include <bits/stdc++.h>
#define int long long
using namespace std;
vector <int> arr;
vector <int> ans;
set <int> st;
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		arr.clear();
		ans.clear();
		st.clear();
		int n;
		cin >> n;
		for (int i = 0; i < 2 * n; i++){
			int tmp;
			cin >> tmp;
			arr.emplace_back(tmp);
			if (st.count(tmp) == 0){
				ans.emplace_back(tmp);
			}
			st.insert(tmp);
		}
		for (int i = 0; i < ans.size(); i++){
			cout << ans[i];
			if (i!=ans.size()-1)cout << " ";
		}
		cout << "\n";
	} 
} 
