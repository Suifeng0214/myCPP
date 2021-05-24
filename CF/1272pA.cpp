#include <bits/stdc++.h>
#define int long long 
using namespace std;
int a[3];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		cin >> a[0] >> a[1] >> a[2];
		cout << max( abs(a[2]-a[1])+abs(a[1]-a[0])+abs(a[2]-a[0])-4 , (int)0) << "\n"; 

	}
}
