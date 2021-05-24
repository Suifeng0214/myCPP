#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
set <int> p;
vector <int> ck;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		p.clear();
		ck.clear();
		int n, m, tmp;
		cin >> n >> m;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			if (!a.empty()){
				if (tmp < a.back()){
					ck.emplace_back(i);
				}
			}
			a.emplace_back(tmp);
			/*
			if (a.size() >= 2){
				if (a[a.size()-2] > a[a.size()-1]){
					
				}
			}*/
		}
		for (int i = 0; i < m; i++){
			cin >> tmp;
			p.insert(tmp);
		}
		bool flag = 0;
		for (int i = 0; i < ck.size(); i++){
			if (a[ck[i]]) 
			swap(a[a.size()-2], a[a.size()-1]);
			if (p.count(ck[i]) == 0) flag = 1;
		}
		for (int i = 0; i < a.size(); i++){
			if ()
		} 
		if (flag){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
} 

