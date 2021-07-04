//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
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
		if (n&1){
			int now = 1;
			for (int i = 0; i < n/2-1; i++){
				cout << now+1 << " " << now << " ";
				now+=2;
			}
			cout << now+1 << " " << now+2 << " " << now;
			cout << "\n";
		}else{
			int now = 1;
			for (int i = 0; i < n/2; i++){
				cout << now+1 << " " << now << " ";
				now+=2;
			}
			cout << "\n";
		}
	}
} 


