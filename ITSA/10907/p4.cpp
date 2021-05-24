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
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++){
			if ('a' <= s[i] && s[i] <= 'k'){
				if (s[i]-2 < 'a'){
					cout << (char)(s[i]-2+'k'-'a'+1);		
				}else{
					cout << (char)(s[i]-2);
				}
			
			}else if ('l' <= s[i] && s[i] <= 'v'){
				if (s[i]+2 > 'v'){
					cout << (char)(s[i]+2-'v'+'l'-1);		
				}else{
					cout << (char)(s[i]+2);
				}
			}else{
				if (s[i] == 'w'){
					cout << 'x';
				}else if (s[i] == 'x'){
					cout << 'w';
				}else if (s[i] == 'y'){
					cout << 'z';
				}else{
					cout << 'y';
				}
			}
		}
		cout << "\n";
	} 
} 


