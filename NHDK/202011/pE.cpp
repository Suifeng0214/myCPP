//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <double> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	double tmp;

	for (int i = 0; i < n; i++){
		cin >> tmp;
		a.emplace_back(tmp);
	}	
	sort(a.begin(),a.end());
	int x;
	cin >> x;
	cout << a[x-1];
} 


