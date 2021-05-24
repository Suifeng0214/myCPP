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
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		bool flag = 1;
		for (int i = 0; i < n; i++){
			if (s[i] == '?'){
				if (i+k < n && s[i+k] != '?'){
					s[i] = s[i+k];
				}
			}else{
				if (i+k >= n) continue;
				if (s[i+k] == '?'){
					s[i+k] = s[i];
				}else if (s[i+k] != s[i]){
					flag = 0;
					break;
				}
			}
		}
		
		int one = 0, zero = 0;
		for (int i = 0; i < k; i++){
			if (s[i] == '1') one++;
			if (s[i] == '0') zero++;
		}
		if (one > k/2 || zero > k/2) flag = 0;
		
		if (flag)
		for (int i = k; i < n; i++){
			if (s[i-k] == '1') one--;
			if (s[i-k] == '0') zero--;
			if (s[i] == '1') one++;
			if (s[i] == '0') zero++;
			if (one > k/2 || zero > k/2){
				flag = 0;
				break;
			}
		}

		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}	
} 


