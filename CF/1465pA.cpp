//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
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
		int n;
		cin >> n;
		string s;
		cin >> s;
		int amt=0;
		for (int i = s.size()-1; i >= 0; i--){
			if (s[i] == ')') amt++;
			else break;
		}
		if (amt > (n)/2){
			cout << "Yes\n";
		}else cout << "No\n";
	}	
} 


