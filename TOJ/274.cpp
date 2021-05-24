#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); 
	int times, tmp;
	string s, stmp;
	cin >> times;
	while(times--){
		cin >> s;
		if (s.size() == 2){
			cout << "YES\n";
			continue;
		}
		int cache=0;
		int i = 0, j = s.size()-1;
		while(i < j){
			if (cache > 2) break;
			if (s[i] != s[j]){
				cache++;
				if (s[i] == s[j-1]){
					j--;
				}else if (s[j] == s[i+1]){
					i++;
				}
			}else{
				i++; j--;
			}
			if (i+1 == j){
				if (s[i] != s[j]) 
					cache++;
				break; 
			} 
		}
		if (cache>1){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
	return 0;
}
