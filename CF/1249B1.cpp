#include <bits/stdc++.h>
#define int long long 

using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, t, tmp, now, find=-1, count, complete;
	vector <int> p;
	vector <int> ans;
	cin >> q;
	while(q--){
		now = 1; // first target
		count = 1;
		complete = 0;
		p.clear();
		ans.clear();
		p.emplace_back(0);
		cin >> t;
		ans.resize(t+10);
		p.reserve(t);
		while(t--){
			cin >> tmp;
			p.emplace_back(tmp);
		}
		while(1){
			find = p[now]; // set the next find
			while(1){
				if (find == now){ // check
					ans[now] = count;
					count = 1;
					complete++;
					now++;
					break;
				}else{
					find = p[find];
					count++;
				}
			}
			if (complete == p.size()-1){ // complete
				break;
			}
		}
		for (int i = 1; i < p.size() ; i++){
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}
