//Author: Suifeng0214
//2020.7.17 22:54 
#include <bits/stdc++.h>
#define int long long
using namespace std;
vector <int> arr;
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		arr.clear();
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			arr.emplace_back(tmp); 
		}
		int ans = 0;
		int tmp = 1;
		for (int i = 1; i < n; i++){
			if (arr[i] >= arr[i-1]){
				tmp++;
			}else{
				ans = max(tmp, ans);
				tmp = 1;
			}
		}
		ans = max(tmp, ans);
		cout << n-ans << "\n";
	}
} 
