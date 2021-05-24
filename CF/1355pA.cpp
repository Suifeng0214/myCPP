#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
map <int, pair<int,int>> mp;

signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int a, k;
		cin >> a >> k;
		int tt = a;
		if (mp[a].second != 0 && k >= mp[a].first){
			cout << mp[a].second << "\n";
			continue;
		}
		k--;
		int mm= -1, m = 10, cnt = 0;
		if (k==0)cout << a << "\n";
		while(m != 0){
			cnt++;
			int tmp = a;
			mm= -1, m = 10;
			while(tmp){
				mm = max(tmp % 10, mm);
				m = min(tmp % 10, m);
				tmp /= 10;
			}
			a += mm * m;
			if (cnt == k){
				cout << a << "\n";
			}
			if (m == 0){
				mp[tt].first = cnt;
				mp[tt].second = a;
				if (cnt < k) //碰到0 < 要找的次數 
					cout << a << "\n";
			} 
			
		}
		
		
		
	}
} 


