#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	pair <int, int> p;
	vector<pair <int, int>> pp;
	vector <char> ans;
	int q, dots, x, y, nx, ny,t; 
	
	cin >> q;
	while(q--){
		nx = 0; ny = 0;
		bool checkX=0, checkY=0;
		pp.clear();
		ans.clear();
		cin >> dots;
		if (dots == 1)
			pp.emplace_back(0, 0); 
		for (int i = 0; i < dots; i++){ //input dots
			cin >> x >> y;
			pp.emplace_back(x, y); 
		}
		sort(pp.begin(), pp.end());		// sort pp
		/*
		for (int i = 0; i < pp.size(); i++){ //testing cout
			cout << pp[i].first<< " " << pp[i].second << "\n";
		}*/
		for (int i = 1; i < pp.size(); i++){ //checkX
			if (pp[i-1].first > pp[i].first)
				break;
			if (i==pp.size()-1)
				checkX=1;
		}
		for (int i = 1; i < pp.size(); i++){ //checkY
			if (pp[i-1].second > pp[i].second)
				break;
			if (i==pp.size()-1)
				checkY=1;
		}
		if (checkX == 1 && checkY == 1){
			cout << "YES\n";
			for (int i = 0; i < pp.size(); i++){
				t = pp[i].first - nx;
				while(t--){
					ans.emplace_back('R');
				}
				t = pp[i].second - ny;
				while(t--){
					ans.emplace_back('U');
				}
				nx = pp[i].first;
				ny = pp[i].second;
			}
			for (int i = 0; i < ans.size(); i++){
				cout << ans[i];
			}
			cout << "\n";
			continue;
		}else{
			cout << "NO\n";
			continue;
		}
			
		
	}
	return 0;
} 
