#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
vector <pair<string, int>> ans;
map <string, int> mp;
bool cmp(pair<string, int> a, pair<string, int> b){
	if (a.S > b.S) return 1;
	else if (a.S == b.S){
		if (a.F < b.F)
			return 1;
		else 
			return 0;
	}else{
		return 0;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("out.txt", "w", stdout);
	string s;
	string article;
	while(getline(cin, s)){
		for (int i = 0; i < s.size(); i++){
			if (isalpha(s[i]) || isdigit(s[i])){
				if (isalpha(s[i])){
					article += tolower(s[i]);
					continue;
				}
				article += s[i];
			}else{
				article += ' ';
			}
		}
	}
	stringstream ss(article);
	string XD;
	while(ss >> XD){
		mp[XD]++;
	}
	for (auto i : mp) ans.emplace_back(i.F, i.S);
	sort(ans.begin(), ans.end(), cmp);
	for (int i = 0 ; i < min((int)3, (int)ans.size()); i++){
		cout << ans[i].F << " = " << ans[i].S << "\n";
	}
}
