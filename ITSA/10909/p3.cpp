#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	cin.ignore();
	string s;
	while(q--){
		getline(cin, s);
		for (int i = 0; i < s.size(); i++){
			if (isalpha(s[i])){
				if ('a'<=s[i]&&s[i]<='z'){
					s[i]=(((s[i]+13)%'a')%26)+'a';
				}else{
					//cout << s[i];
					s[i]=(((s[i]+13)%'A')%26)+'A';
				}
			}
		}
		cout << s << "\n";
	}
}
