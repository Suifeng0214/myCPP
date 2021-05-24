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
		string s;
		cin >> s;
		int now = 1;
		for (int i = 0; i < s.size(); i++){

			if (s[i] == '+'){
				now++;
			}else if (s[i] == '-'){
				now--;
			}else if (s[i] == '*'){
				
			}else{

			}
		}
		cout << now << "\n";
	}
} 


