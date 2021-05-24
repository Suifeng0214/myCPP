//Suifeng0214
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
		int zero, one, a, b;
		cin >> zero >> one;
		a = zero, b = one;
		int len = one+zero;
		string s;
		cin >> s;
		
		if (!zero || !one){
			char now = ((zero>one)? '0' : '1');
			for (int i = 0; i < len; i++){
				if (s[i] == '?'){
					s[i] = now;
					one -= (s[i] == '1' ? 1 : 0);
					zero -= (s[i] == '0' ? 1 : 0);
				}
			}
			string tmp = s;
			int chk_0=0, chk_1=0;
			for (int i = 0; i < len; i++){
				chk_0 += (s[i] == '0'? 1 : 0);
				chk_1 += (s[i] == '1'? 1 : 0);
			}
			reverse(tmp.begin(), tmp.end());
			if (zero < 0 || one < 0 || tmp!=s || chk_0 != a || chk_1 != b){
				cout << "-1";
			}else{
				for (int i = 0; i < len; i++){
					cout << now;
				}
			}
			cout << "\n";
			continue;
		}
		for (int i = 0; i < len/2; i++){
			if (s[i] == '?'){
				if (s[len-1-i] != '?'){
					s[i] = s[len-1-i];
					one -= (s[len-1-i] == '1' ? 2 : 0);
					zero -= (s[len-1-i] == '0' ? 2 : 0);
				}
			}else{
				if (s[len-1-i] == '?'){
					s[len-1-i] = s[i];
				}
				one -= (s[i] == '1' ? 2 : 0);
				zero -= (s[i] == '0' ? 2 : 0);
			}
		}
		if (zero < 0 || one < 0){
			cout << "-1\n";
			continue;
		}

		for (int i = 0; i < len/2; i++){
			if (s[i] == '?'){
				char now;
				now = ((one > zero)? '1' : '0');
				s[i] = now;
				s[len-1-i] = now;
				if (one > zero) one -= 2;
				else zero -= 2;
			}
		}
		if (len&1 && s[len/2] == '?'){
			char now = ((one > zero)? '1' : '0');
			s[len/2] = now;
			one -= (s[len/2] == '1' ? 1 : 0);
			zero -= (s[len/2] == '0' ? 1 : 0);
		}
		string tmp = s;
		int chk_0=0, chk_1=0;
		for (int i = 0; i < len; i++){
			chk_0 += (s[i] == '0'? 1 : 0);
			chk_1 += (s[i] == '1'? 1 : 0);
		}
		reverse(tmp.begin(), tmp.end());
		if (zero < 0 || one < 0 || tmp!=s || chk_0 != a || chk_1 != b){
			cout << "-1\n";
			continue;
		}
		for (int i = 0; i < len; i++){
			cout << s[i];
		}
		cout << "\n";
	}	
} 


