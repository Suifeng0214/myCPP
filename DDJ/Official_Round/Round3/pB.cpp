//Suifeng0214
//11:36
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
vector <int> arr;
vector <vector <int>> ans[16];
bool used[20];
int n;
void dfs(int now, int x){ 
	arr[now] = x;
	if (now == n-1){
		for (int i = 0; i < n; i++){
			cout << arr[i] << " \n"[i==n-1];
		}
		ans[n].emplace_back(arr);
		return;
	}
	for (int i = 1; i <= n; i++){
//		if (now == n-2 && i % arr[0] > 2) continue; 
		if (used[i] || x % i > 2) continue;
		used[i] = 1;
		dfs(now+1, i);
		used[i] = 0;
	}
}
signed main() 
{ 
//	freopen("ans.txt", "w", stdout);
//	freopen("in.txt", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int q;
	cin >> q;
	while(q--){
		arr.clear();
		cin >> n;
		/*
		if (!ans[n].empty()){
			for (auto i : ans[n]){
				for (auto j : i) cout << j << " ";
				cout << "\n";
			}
			continue;
		}*/
		arr.resize(n);
		for (int i = 1; i <= n; i++){
			used[i] = 1;
			dfs(0, i);
			used[i] = 0;
		}
	}
}
