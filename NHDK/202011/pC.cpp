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
	int x;
	int n;
	cin >> x >> n;
	int tmp;
	int ans=0;
	for (int i = 0 ; i< n; i++){
		cin >>tmp;
		if (tmp<= x) ans++;
	}	
	cout << ans << "\n";
} 


