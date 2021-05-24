#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	while(n--){
		int tmp;
		cin >> tmp;
		mp[tmp]++;
	}
	cout << mp.size() << "\n";
	for (auto i : mp){
		cout << i.first << ": " << i.second << "\n";
	}
} 
