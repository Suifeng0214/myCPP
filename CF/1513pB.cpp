//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
const int MOD = 1e9+7;
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int fac[2000010];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	fac[1] = 1;
	for (int i = 2; i < 2000010; i++){
		fac[i] = (fac[i-1] * i)%MOD;
	}
//	cout << fac[200000] << "\n";
	int q;
	cin >> q;
	while(q--){
		map <int, int> mp;
		int n;
		cin >> n;
		if (n==2){
			int a, b;
			cin >> a >> b;
			if (a==b){
				cout << "2\n";
			}else{
				cout << "0\n";
			}
			continue;
		}
		int a = 2147483647;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			mp[tmp]++;
			a &= tmp;
		}
		int cnt = mp[a];
		//cout << cnt << "\n";
		
		cout << (((cnt*(cnt-1))%MOD)*fac[n-2])%MOD << "\n";
	}	
} 


