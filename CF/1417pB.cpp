#include <bits/stdc++.h>
using namespace std;
//#define int long long
vector <pair<int, int>> a; // val, idx
bitset <100005> bs;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		bs.reset();
		int n, T;
		cin >> n >> T;
		if (n==1){
			int tmp;
			cin >> tmp;
			cout << "1\n";
			continue;
		}
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp, i);
		}
		sort(a.begin(), a.end());
		int idx= -1, cnt = 0;
//		int s=-1, e=-1;
		bool flag= 0;
		for (int i = 0; i < n-1; i++){
			if (a[i].first + a[i+1].first >= T){
				if (!flag)
					idx = i, flag = 1;
				if (a[i].first + a[i+1].first == T)
					cnt++;
				else break;
			}
//			if (i==n-2) e = n-2;
		}
		if (idx==-1){
			for (int i = 0; i < n; i++){
				cout << 1 << " ";
			}
			cout << "\n";
			continue;
		}
	//	cout << s << "@" << e << "\n";
		for (int i = 0; i <= idx+cnt/2; i++){
			bs[a[i].second] = 1;
		}
		for (int i = 0; i < n; i++){
			cout << bs[i] << " ";
		}
		cout << "\n";
	}
} 


