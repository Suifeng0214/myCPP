//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	for (int i = 1; i < 100000; i++)
		for (int j = 1; j < 100000; j++){
			if ((i^j) == i) cout << "@\n";
			if ((i^j) == j) cout << "#\n";
		}
} 


