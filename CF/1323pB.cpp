#include <bits/stdc++.h>
using namespace std;
#define int long long
	vector <bool> a;
	vector <bool> b;
	vector <int> tmpa;
	vector <int> tmpb;
	int na[40005], nb[40005];
	int n, m, k, ans=0;
void gogo(int a, int b);
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> m >> k;
	int tmp;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		if (tmp == 0 && a.size() != 0){
			tmpa.emplace_back(a.size());
			a.clear();
			continue;
		}
		if (tmp != 0)
			a.emplace_back(tmp);
	}
	if (a.size() != 0){
		tmpa.emplace_back(a.size());
		a.clear();
	}
	//
	for (int i = 0; i < m; i++){ 
		cin >> tmp;
		if (tmp == 0 && b.size() != 0){
			tmpb.emplace_back(b.size());
			b.clear();
			continue;
		}
		if (tmp != 0)
			b.emplace_back(tmp);
	}
	if (b.size() != 0){
		tmpb.emplace_back(b.size());
		b.clear();
	}
	for (int i = 0; i < tmpa.size(); i++){
		for (int j = 1; j <= tmpa[i]; j++){
			na[j]+=tmpa[i]-j+1;
		}
	}
	for (int i = 0; i < tmpb.size(); i++){
		for (int j = 1; j <= tmpb[i]; j++){
			nb[j]+=tmpb[i]-j+1;
		}
	}/*
	for (int i = 1; i < n; i++){
		cout << na[i] << " ";
	}
	cout << "\n";
	for (int i = 1; i < m; i++){
		cout << nb[i] << " ";
	}
	/*for (int i : tmpa) cout << i << " "; 
	cout << "\n";
	for (int i : tmpb) cout << i << " ";
	cout << "\n";*/
	
	for (int i = 1; i <= sqrt(k); i++){ // run factor nums
		if (k % i) continue;
		int Pair = k/i;
		if (max(Pair, i) > 40000) continue;
		ans += na[Pair] * nb[i];
		if (i == Pair) continue;
		else	
			ans += na[i] * nb[Pair];
	}
	cout << ans;
}


