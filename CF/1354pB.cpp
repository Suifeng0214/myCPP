#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
int cnt[4];
queue <char> qu;
set <char> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		cnt[0] = 0; cnt[1] = 0; cnt[2] = 0; cnt[3] = 0;
		while(!qu.empty()){
			qu.pop();
		}
		st.clear();
		string s;
		cin >> s;
		int ans = 200005;
		for (int i = 0; i < s.size(); i++){
			qu.emplace(s[i]); //一直新增 
			cnt[s[i]-'0']++; //更新 
			st.insert(s[i]);
			while(cnt[qu.front()-'0'] > 1){
				cnt[qu.front()-'0']--;
				qu.pop();
			}
			if (cnt[1]>=1 && cnt[2]>=1 && cnt[3]>=1){
				ans = min(ans, (int)qu.size());
			}
		}
		if (st.count('1') == 1 && st.count('2') == 1 && st.count('3') == 1){
			cout << ans << "\n";
		}else{
			cout << 0 << "\n";
		}
	}
} 


