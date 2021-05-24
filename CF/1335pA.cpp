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
		if ( n <= 2){
			cout << 0 << "\n";
		}else{
			cout << ((n+1)/2-1) << "\n";;
		}
	}
} 


