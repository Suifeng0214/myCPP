#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		if (n < 4){
			cout << "NO\n";
			continue;
		}
		bool ans = 0;
		int size = s.size()-1;
		if (s[0] == '2'&& s[1] == '0' && s[2] == '2' && s[3] == '0'){//2020...
			ans = 1;
		}else if (s[size] == '0'&& s[size-1] == '2' && s[size-2] == '0' && s[size-3] == '2'){//...2020
			ans = 1;
		}else if (s[0]=='2' && s[size-2]=='0' && s[size-1]=='2' && s[size]=='0'){ // 2..020
			ans = 1;
		}else if (s[0]=='2' && s[1]=='0' && s[size-1]=='2' && s[size]=='0'){ //20...20
			ans = 1;
		}else if (s[0]=='2' && s[1]=='0' && s[2] == '2' && s[size]=='0'){ // 202...0
			ans = 1;	
		}
		if (ans){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
} 
