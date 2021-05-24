#include <bits/stdc++.h>
#define int long long 

using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, t, tmp, find, count;
	vector <int> p;
	vector <int> ans;
	vector <int> same;
	cin >> q;
	while(q--){
		p.clear();
		ans.clear();
		same.clear();
		p.emplace_back(0);
		cin >> t;
		ans.resize(t+10);
		p.reserve(t);
		while(t--){
			cin >> tmp;
			p.emplace_back(tmp);
		}
		
		for (int i = 1; i < p.size(); i++){
			if (ans[i] == 0){
				find = p[i];
			}else{
				continue;
			}
			count = 1;
			while(ans[i] == 0){
				same.emplace_back(find);
				if (find == i){
					for (int j = 0; j < same.size(); j++){
						ans[same[j]] = count;
					}
					same.clear();
					count = 1;
					break;
				}else{
					find = p[find];
					count++;
				}
			}
		}
		
		for (int i = 1; i < p.size() ; i++){
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}
