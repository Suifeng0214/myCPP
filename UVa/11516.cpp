//9:30
#include <bits/stdc++.h>
#define mid ((l+r)/2)
using namespace std;
vector <int> a;
int n, m;
bool check(double mm){
	int cnt = 1;
	double tmp = a[0] + mm;
	for (int i = 1; i < m; i++){
		if (tmp < a[i]){
			cnt++;
			if (cnt > n){
				return 0;
			}
			tmp = a[i] + mm;
		}
	}
	return 1;
}
signed main(){
	int q;
	cin >> q;
	while(q--){
		a.clear();
		cin >> n >> m;
		for (int i = 0; i < m; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		sort(a.begin(), a.end());
		double l=0, r=a[a.size()-1]-a[0];
		while (l+1e-2<r){
			if (check(mid)){
				r=mid;
			}else{
				l=mid;
			}
		}
		cout << setprecision(1) << fixed << r/2 << "\n";
	}
}
