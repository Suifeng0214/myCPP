#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> a;
	vector <int> b;
	int q, tmp, aa, bb, sumA=0;
	bool c=0, all_1 = 0;
	cin >> q;
	aa=q; bb=q;
	while(aa--){
		cin >> tmp;
		if (tmp == 0) all_1 = 1;
		a.emplace_back(tmp);	
	}
	while(bb--){
		cin >> tmp;
		if (tmp == 0) all_1 = 1;
		b.emplace_back(tmp);	
	}
	int ans=0;
	for (int i = 0; i < q; i++){
		if (a[i] == 1 && b[i] != 1) sumA++;
		if (b[i] == 1 && a[i] == 0){
			ans++;
		}
	}
	if (!all_1)
		cout << -1 << "\n";
	else if (sumA==0){
		cout << -1 << "\n";
	}else{
		cout << (int)(ans/sumA)+1 << "\n";
	}
} 

