#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
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
		a.clear();
		int n, k;
		cin >> n >> k;
		for (int i = 0; i < n ; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		for (int i = 0 ; i < k; i++){
			a[a.size()-1] += a[a.size()-2-i];
		}
		cout << a[a.size()-1] << "\n"; 
	}	
} 


