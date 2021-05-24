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
		int x, y, z;
		cin >> x >> y >> z;
		int tmp[3] = {x, y ,z};
		sort(tmp, tmp+3);
		
		if (tmp[1] != tmp[2]){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			cout << tmp[2] << " " << tmp[0] << " " << tmp[0] << "\n";
		}
	}
} 
