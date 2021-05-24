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
		string s;
		int cnt = 1, one=0, zero=0;
		bool flag = 0;
		for (int i = 0; i < 2*n-1; i++){
			char c;
			cin >> c;
			s+=c;
			if (i>0 && s[i-1]!=s[i]){
				cnt=1;	
			}else{
				cnt++;
				if (cnt >= n){
					flag=1;
				}
			}
			if (c=='1'){
				one++;
			}else{
				zero++;

			}
		}
		bool now;
		now=(one>zero)? 1:0;
		for (int i = 0; i < n; i++){
			if (flag && i==n/2){
				cout << !now;
			}else{
				cout << now;
			}
		}
		cout << "\n";
	}	
} 


