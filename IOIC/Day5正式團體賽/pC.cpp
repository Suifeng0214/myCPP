//Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;
stack <int> pos;
signed main() 
{ 
	freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s;
	while(getline(cin, s)){
		while(!pos.empty()) pos.pop();
		pos.emplace(0);
		string ans=".", tmp; 
		for (int i = 0; i < s.size(); i++){
			if (i < s.size()-4 && s[i] == 'e' && s[i+1] == 'r' && s[i+2] == '.' && s[i+3] == '.' && s[i+4] == '.') i = i+4;
			else ans += s[i];
		}

		stringstream ss(ans);
		ans = "";
		while(ss >> tmp){
		//	if (tmp == "er...") continue;
			ans += tmp;
			if (ss.str() != "") ans += " ";
		}
	//	cout << ans << "\n";
		string ans2;
		for (int i = 1; i < ans.size(); i++){
			if (ans[i] == '.'){
				for (int j = pos.top()+1; j <= i; j++){
					ans2 += ans[j];
				}
			   	pos.emplace(i);
			}else if (ans[i] == '$'){
				for (int j = i+1; j < ans.size(); j++){
					if (ans[j] == '.'){
						i = j;
						break;
					}
				}
			}
		}
		cout << ans2 << "\n";
	}
} 


