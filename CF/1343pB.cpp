#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		if (n&1 || n%4 != 0){
			cout << "NO\n";
			continue;
		}else{
			int a=2, b=1;
			cout << "YES\n";
			for (int i = 1; i <= n/2; i++){
				cout << a << " ";
				a+=2;
			}
			for (int i = 1; i < n/2; i++){
				cout << b << " ";
				b+=2;
			}
			cout << b+n/2 << "\n";
		}
	}
} 


