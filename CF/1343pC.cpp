#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int last = -1;
		int M= -1e9-10, m=-1e9-10, sum=0;
		while(n--){
			int tmp;
			cin >> tmp;
			if (tmp > 0){
				if (last == -1 || last == 1){
					M = max(M, tmp);
				}else{
					sum += m;
					M = -1e9-10;
					m = -1e9-10;
					M = max(M, tmp);
				}
				last = 1;
			}else{
				if (last == -1 || last == 0){
					m = max(m, tmp);
				}else{
					sum += M;
					m = -1e9-10;
					M = -1e9-10;
					m = max(m, tmp);
				}
				last = 0;
			}
		}
		if (last == 0 && M == -1e9-10) sum+=m;
		if (last == 1 && m == -1e9-10) sum+=M;
		cout << sum << "\n";
	}
} 


