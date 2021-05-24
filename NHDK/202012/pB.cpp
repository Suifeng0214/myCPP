#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.size(); i++){
		ans += s[i]-'0';
	}
	if (ans%3==0){
		cout << "Win\n";
	}else cout << "Lose\n";
}
