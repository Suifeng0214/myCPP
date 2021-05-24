#include <bits/stdc++.h>
#define int long long 
#define F first
#define S second
using namespace std;
map <char, int> mp;
vector <pair<char, int>> ans;
bool cmp(pair<char, int> x, pair<char, int> y){
	if (x.S > y.S) return true;
	if (x.S == y.S) return x.F < y.F;
	return false;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		string a;
		getline(cin, a);
		for (int i = 0; i < a.size(); i++){
			if (isalpha(a[i])){
				mp[toupper(a[i])]++;
			}
		}
	}
	for (auto i : mp){
		ans.emplace_back(i.first, i.second);
	}
	sort(ans.begin(), ans.end(), cmp);
	for (int i = 0; i < ans.size(); i++){
		cout << ans[i].F << " " << ans[i].S << "\n";
	}
}
