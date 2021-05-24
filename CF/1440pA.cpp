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
		int n, a, b, h;
		cin >> n >> a >> b >> h;
		string s;
		cin >> s;
		int one=0, zero=0, now = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == '0') zero++, now += a;
			else one++, now += b;
		}
		int aa[3];
		aa[0] = now;
		aa[1] = now - zero*a + zero*h + zero*b;
	   	aa[2] = now - one*b + one*h +one*a;
		sort(aa, aa+3);
		cout << aa[0] << "\n";
	}
} 


