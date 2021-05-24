//Author: Suifeng0214
//2020.07.02 20.34
#include <bits/stdc++.h>
#define int long long 
using namespace std;
vector <pair<int, int>> arr;
signed main()
{
	int m, t;
	cin >> m >> t;
	for (int i = 0 ; i < t; i++){
		int a, b;
		cin >> a >> b;
		arr.emplace_back(a, b); 
	}
	sort(arr.begin(), arr.end());
	int ans = arr[0].second - arr[0].first;
	for (int i = 1; i < arr.size(); i++){
		if (arr[i-1].first < arr[i].second && arr[i].second < arr[i-1].second){
			arr[i].first = arr[i-1].first;
			arr[i].second = arr[i-1].second;
		}else if (arr[i-1].first <= arr[i].first && arr[i].first <= arr[i-1].second){
			ans += arr[i].second - arr[i-1].second;
		}else{
			ans += arr[i].second - arr[i].first;
		}
	}
	cout << ans;
} 
