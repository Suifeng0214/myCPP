#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		if (a > b){
			cout << ">\n";
		}else if (a < b){
			cout << "<\n";
		}else{
			cout << "=\n";
		}
		 
	} 
	
} 
