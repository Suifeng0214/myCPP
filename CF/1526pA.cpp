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
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int tmp;
		vector <int> a;
		for (int i = 0; i < n*2; i++){
			cin >> tmp;
			a.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++){
			cout << a[i] << " " << a[2*n-1-i] << " \n"[i==n-1];
		}
	}
} 


