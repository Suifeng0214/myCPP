#include <bits/stdc++.h>
#define int long long
using namespace std;
unordered_map <string, string> mp;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	while(getline(cin, s)){
		if (s == ""){
			break;
		}
		stringstream ss(s);
		string a, b;
		ss >> a;
		ss >> b;
		mp[b] = a;
	}
	while(getline(cin, s)){
		if (mp[s].empty()){
			cout << "eh\n";
			continue;
		}		
		cout << mp[s] << "\n";
	}
}
