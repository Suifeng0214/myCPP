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
	int n, k;
	int q;
	cin >> q;
	while(q--){
		cin >> n >> k;
		if (n > k){
			cout << k << "\n";
			continue;
		}else if (k == n){
			cout << k+1 << "\n";
			continue;
		}
		//cout << k/(n-1) * (n-1)  + k % (n-1) << "\n";
		int ans = k + k / (n-1);
		if (ans%n == 0) ans--;
		cout << ans << "\n";
		/*while(cnt != k){
			if (n%i++ != 0){
				cnt++;
				if (cnt == k){
					cout << i << "\n";
					break;
				}
			}	
		}*/
	}
		
} 


