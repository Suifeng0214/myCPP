#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> a;
	int q, t, tmp, n, sum=0;
	bool c = 0;
	string s;
	
	cin >> q;
	while(q--){
		sum = 0;
		tmp=0;
		c=0; 
		cin >> s;
		for (int i = 0; i < s.size(); i++){
			if (c==1){
				if (s[i] == '0') {
					tmp++;
					continue;
				}
				if (s[i] == '1') {
					sum+=tmp;
					tmp = 0;
				}
			}else{
				if (s[i] == '1') c=1;
			}
		}
		cout << sum << '\n';
	}
	return 0;
} 
