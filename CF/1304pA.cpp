#include <iostream>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, x, y, jp1, jp2;
	cin >> q;
	while(q--){
		cin >> x >> y >> jp1 >> jp2;
		if (abs(x-y) % (jp1+jp2) == 0){
			cout << abs(x-y) / (jp1+jp2) << "\n";
		}else{
			cout << -1 << "\n";
		}
	}
} 

