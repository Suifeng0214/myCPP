#include <bits/stdc++.h>
using namespace std;
#define SagiriMywife ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s[10]={"aaa", "abca", "aaac", "abcc", "aa", "ouo", "xdd", "aaaa", "txt", "oeis"};
signed main(){
	SagiriMywife
	freopen("gen.txt", "r", stdin);
	freopen("pi.txt", "w", stdout);
	int n;
	while(cin >> n){
		int cnt = 1;
		map <string, int> mp;
		while(n--){
			string s;
			cin >> s;
			if (mp[s] == 0){
				cout << "New! " << cnt << "\n";
				mp[s] = cnt++;
			}else{
				cout << "Old! " << mp[s] << "\n";
			}
		}
	}
}
