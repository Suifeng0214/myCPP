#include <bits/stdc++.h>
#define int long long
#define lowbit(x) (x&-x)
#define SagiriMywife ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int conv(string s){
	int ret = 0;
	int now = 0;
	for (int i = s.size()-1; i >= 0; i--){
		if (s[i] == '1')
			ret += (1<<now);
		now++;
	}
	return ret;
}
signed main(){
//	cout << conv("1011") << "\n";
	SagiriMywife
	int q, t=0;
	cin >> q;
	while(q--){
		t++;
		int n, sz;
		cin >> n >> sz;
		vector <int> a, b, tmpa;
		for (int i = 0; i < n; i++){
			string tmp;
			cin >> tmp;
			a.emplace_back(conv(tmp));
		//	cout << a.back() << "#\n";
		}
		for (int i = 0; i < n; i++){
			string tmp;
			cin >> tmp;
			b.emplace_back(conv(tmp));
		//	cout << b.back() << "@\n";
		}
		sort(b.begin(), b.end());
		int ans = 0x3f3f3f3f;
		
		for (int i = 0; i < n; i++){
			tmpa = a;
			int C = (a[0]^b[i]);
		//	cout << tmpans << "#\n";
			for (int j = 0; j < n; j++){
				tmpa[j] ^= C; 
			}
			sort(tmpa.begin(), tmpa.end());
			if (tmp == b){
				int tmpans=0;
				while(C){
					tmpans++;
					C -= lowbit(C);
				}
				ans = min(ans, tmpans);
			}
		}
		if (ans == 0x3f3f3f3f)
			cout << "Case #" << t << ": IMPOSSIBLE\n";
		else cout << "Case #" << t << ": " << ans << "\n";
	}
}
