#include <bits/stdc++.h>
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	int ce=0;
	while(q--){
		ce++;
		string s, tmp, ans;
		cin >> s;
		s += 'a';
		int	last = 0;
		for (int i = 1; i < s.size(); i++){
			if (isalpha(s[i])){
				stringstream ss(tmp);
				int cnt;
				ss >> cnt;
				for (int j = 0; j < cnt; j++){
					ans += s[last];
				}
				last = i;
				tmp = "";
			}else{
				tmp += s[i];
			}
		}
		cout << "Case " << ce << ": "<< ans << "\n";
	}	
}
