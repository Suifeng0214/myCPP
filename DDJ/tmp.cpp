//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
signed main() 
{ 
//	freopen("in.txt", "r", stdin);
	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	srand(clock());
	int q = 10;
	while(q--){
		int t = 10;
		cout << t << "\n";
		for (int i = 0; i < t; i++){
			int l = rand()%(11);
			int r = rand()%(10-l+1)+l;
			cout << l << " " << r << "\n";
		}
	}
}
