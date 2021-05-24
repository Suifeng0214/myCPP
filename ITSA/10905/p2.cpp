#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> ar;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		ar.emplace_back(b);
	}
	int ans = 0;
	sort(ar.begin(), ar.end());
	while(ar[q-1-5] > 0){
		int nowm = ar[q-1-5];
		ans += nowm * 5;
		for (int i = q-1; i >= q-1-5; i--){
			ar[i] -= nowm;
		}
		//if (ar[q-1-5] <= 0)
		sort(ar.begin(), ar.end());
	}
	cout << ans << "\n";
} 


