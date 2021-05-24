#include <bits/stdc++.h>
#define F first
#define S second
#define int long long
using namespace std;
vector <pair<double, pair<int, int>>> a;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, nth;
//	freopen("out.txt", "w", stdout);
	while(cin >> n >> nth){
		a.clear();
		a.emplace_back(1, make_pair(1, 1));
		for (int i = 2; i <= n; i++){//i¤À¥À  j¤À¤l
			for (int j = 1; j < i; j++){
				if (__gcd(i, j) != 1 && j != 1) continue;
				a.emplace_back((double)j/i, make_pair(i, j)); 
			}
		}
		sort(a.begin(), a.end());
		cout << a[nth-1].S.S << "/" << a[nth-1].S.F << "\n";
	}
}
