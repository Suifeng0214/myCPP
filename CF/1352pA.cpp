#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
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
		a.clear();
		string s;
		cin >> s;
		int cnt = 0, ans1 = 0;
		for (int i = s.size()-1; i >= 0; i--){
			if (s[i] != '0'){
				a.emplace_back((s[i]-'0') * pow(10, cnt++));
				ans1++;
			}else{
				cnt++;
				continue;
			}
		}
		cout << ans1 << "\n";
		for (int i = 0; i < a.size(); i++){
			cout << a[i] << " ";
		}
		cout << "\n";
	}
} 


