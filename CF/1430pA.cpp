
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
		int a, b, c;
		bool x=0;
		for (int i = 0; i <= 1000; i++){
			for (int j = 0; j <= 1000; j++){
				int k = (n-i*3-j*5);
				if (i*3 + j*5 > n) break;
				if (k%7==0){
					k/=7;
					cout << i << " " << j << " " << k << "\n";
					x=1;
					break;
				}
				if (i*3 + j*5 + k/7*7 > n) break;	
			}
			if (x) break;
			if (i*3 > n) break;
		}
		if (x == 0) cout << "-1\n"; 
	}	
} 


