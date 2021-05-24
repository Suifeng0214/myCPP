#include <bits/stdc++.h>
#define int long long 
using namespace std;
vector <int> a;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, t, tt, Min, tmp;
	double avg, sum;
	cin >> q;
	while(q--){
		a.clear();
		sum = 0;
		cin >> t;
		tt = t;
		while(t--){
			cin >> tmp;
			sum += tmp;
			a.emplace_back(tmp);	
		}
		avg = sum/tt;
		cout << (int)ceil(avg) << "\n";
	}
}
