#include <bits/stdc++.h>
using namespace std;
string a[3][3];
bitset<12>used;
bitset<12>used2;
vector <pair<char, int>> ans;
bool find(string a, char c){
	for (int i = 0; i < a.size(); i++){
		if (a[i] == c) return true;
	}
	return false;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("out.txt", "w", stdout);
	int q;
	cin >> q;
	while(q--){
		ans.clear();
		used.reset();
		used2.reset();
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				cin >> a[i][j];
			}
		}
		int cnt_even=0;
		int now = 0;
		for (int i = 0 ; i < 3; i++){
			if (a[i][2] == "even"){
				for (int j = 0; j < a[i][0].size(); j++){
					used[a[i][0][j]-'A'] = 1;
				}
				for (int j = 0; j < a[i][0].size(); j++){
					used[a[i][1][j]-'A'] = 1;
				}
				cnt_even++;
			}else{
				for (int j = 0; j < a[i][0].size(); j++){
					used2[a[i][0][j]-'A'] = 1;
				}
				for (int j = 0; j < a[i][0].size(); j++){
					used2[a[i][1][j]-'A'] = 1;
				}
			}
		}
	//	cout << cnt_even << "@\n";
		if (cnt_even == 2){
			char ans;
			for (int i = 0; i < 12; i++){
				if (used[i] == 0 && used2[i] == 1){
					ans = i+'A';
					break;
				}
			}
			for(int i = 0; i < 3; i++){
				if (find(a[i][0], ans) && a[i][2] == "up") now = 1;
				if (find(a[i][1], ans) && a[i][2] == "down") now = 1;
			}
			cout << ans << " is the counterfeit coin and it is " << ((now==0)? "light.\n" : "heavy.\n");
			continue;
		}
		bool flag = 1;
		for (int i = 'A'; i <= 'L'; i++){
			if (used[i-65] || !used2[i-65]) continue;
			for (int j = 0; j <= 1; j++){
				int appear = 0;
				bool paradox = 0;
				for (int ii = 0; ii < 3; ii++){
					if (!find(a[ii][0], (char)i) && !find(a[ii][1], (char)i) && a[ii][2] != "even") paradox=1;
					if (j==0){
						if (find(a[ii][0], (char)i) && a[ii][2] == "up" ||
							find(a[ii][1], (char)i) && a[ii][2] == "down") paradox = 1;
					}else{
						if (find(a[ii][0], (char)i) && a[ii][2] == "down" ||
							find(a[ii][1], (char)i) && a[ii][2] == "up") paradox = 1;
					}
				}
				if (!paradox) ans.emplace_back((char)i, j);
			}
		}
		for (int i = 0; i < ans.size(); i++){
			cout << ans[i].first << " is the counterfeit coin and it is " << ((ans[i].second==0)? "light" : "heavy") << ".\n";
		}
	}
}
