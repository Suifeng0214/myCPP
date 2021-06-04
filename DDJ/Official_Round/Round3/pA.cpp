//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
int isp(int x){
	if (x < 2) return 0;
	for (int i = 2; i*i <= x; i++){
		if (x%i==0) return 0;
	}
	return 1;
}
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		int n = s.size();
		int ans = 0;
		for (int i = 0; i < n; i++){
			string tmp;
			for (int j = i; j < n; j++){
				tmp += s[j];
				int ouo = stoll(tmp);
			//	if (isp(ouo)) cout << ouo << endl;
				ans += (isp(ouo))? ouo : 0;
			}
		}
		cout << ans << "\n";
	}
}
