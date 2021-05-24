#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<pair<string, int>> listt;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	vector <int> alphbet(27);
	cin >> q;
	while(q--){
		listt.clear();
		alphbet.clear();
		alphbet.resize(27);
		int n;
		cin >> n;
		char tmp;
		string s="";
		for (int i = 0; i < n; i++){
			cin >> tmp;
			alphbet[tmp - 'a']++;
			s += tmp;
		}
		vector <int> k;
		char first;
		for (int i = 0; i < 26; i++){
			if (alphbet[i] != 0){
				first = (i + 'a');
				//cout << first << "@\n";
				break;
			}
		}
		for (int i = 0; i < s.size(); i++){
			if (s[i] == first){
				k.emplace_back(i+1);
				//cout << i+1 << "@\n";
			}	
		}
		string tmps = "";
		for (int i = 0; i < k.size(); i++){
			tmps = "";
			if (k[i] <= s.size()/2){
				for (int j = k[i]-1; j < k[i]-1 + s.size(); j++){
					tmps += s[j%s.size()]; 
				}
				//cout << tmps << "@\n";
				listt.emplace_back(tmps, k[i]);
				tmps = "";
			}else{
				for (int j = k[i]-1; j < s.size(); j++){
					tmps += s[j]; 
				}
				for (int j = k[i]-2; j >= 0; j--){
					tmps += s[j]; 
				}
				listt.emplace_back(tmps, k[i]);
				tmps = "";
			}
		}
		sort(listt.begin(), listt.end());
		cout << listt[0].first << "\n" << listt[0].second << "\n";
	}
} 


