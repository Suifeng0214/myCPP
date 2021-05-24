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
		string s;
		cin >> s;
		int l=0; // ()
	    int L=0; // []
		int ans = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == ')'){
				if (l>0){
					ans++;
					l--;
				}
			}else if (s[i] == ']'){
				if (L>0){
					ans++;
					L--;
				}
			}else if (s[i] == '('){
				l++;
			}else{
				L++;
			}
		}
		cout << ans << "\n";
	}
} 

