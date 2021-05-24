#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin >> a;
	b = a;
	reverse(b.begin(), b.end());
	if (a.size() % 2 == 1){
		cout << "NO\n";
	}else if (a == b){
		cout << "YES\n";
		for (int i = 0; i < a.size()/2; i++){
			cout << a[i];
		}
		cout << "\n";
	}else{
		cout << "NO\n";
	}
	
}
