#include <bits/stdc++.h>
using namespace std;
#define int long long
#define is_ODD &1
#define is_EVEN %2==0
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
		int n, k;
		cin >> n >> k;
		if (n < k){
			cout << "NO\n";
		}else if (n == k){
			cout << "YES\n";
			for (int i = 0; i < n; i++){
				cout << 1 << " ";
			}
			cout << "\n";
		}else{
			if ((n - (k-1)) is_EVEN){
				if ((n-(2*(k-1)))is_EVEN && (n-(2*(k-1))) >= 2){
					cout << "YES\n";
					for (int i = 0; i < (k-1); i++){
						cout << 2 << " ";
					}
					cout << n-2*(k-1);
					cout << "\n";
					continue;
				}
				cout << "NO\n";
			}else{
				cout << "YES\n";
				for (int i = 0; i < (k-1); i++){
					cout << 1 << " ";
				}
				cout << n-(k-1);
				cout << "\n";
			}
		}
	}
} 


