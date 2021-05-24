#include <bits/stdc++.h>
#define int long long 
using namespace std;
bitset <100000> used;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("out.txt", "w", stdout);
	int a, b, c, d;
	int casee=0;
	while (cin >> a >> b >> c >> d){
		casee++;
		used.reset();
		if (a==0 && b==0 && c==0 && d==0) break;
		int now = d;
		//used[d] = 1;
		int cnt = 0;
		while (!used[(a*now+b)%c]){
			used[(a*now+b)%c] = 1;
			now = (a*now+b)%c;
			cnt++;
		}
		cout <<"Case " << casee << ": "<< cnt << "\n";
	}
}
