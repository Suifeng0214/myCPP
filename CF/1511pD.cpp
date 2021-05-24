//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
/*
string ans = "         ";
string ouo = "abc";
void dfs(int now, int k){
	ans[now] = ouo[k];
	if (now == 8){
		int cnt = 0;
		for (int i = 0; i < 8; i++){
			for (int j = i+1; j < 9; j++){
				if (ans[i] == ans[j] && ans[i+1] == ans[j+1])
					cnt++;
			}
		}
		if (!cnt)
			cout << ans << "\n";
		return;
	}
	for (int i = 0; i < 3; i++){
		dfs(now+1, i);
	}
}*/
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string s;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++){
		s += 'a'+i;
		for (int j = i+1; j < k; j++){
			s += 'a' + i;
			s += 'a' + j;	
		}
	}
	if (n <= k*k+1){
		for (int i = 0; i < min(n, k*k); i++){
			cout << s[i];
		}
		if (n==k*k+1) cout << "a";
	}else{
		/*
		string tmp = s;
		reverse(tmp.begin(), tmp.end());
		cout << s << "\n" << tmp << "\n";
		string neww = s + tmp;*/
		int cnt=0;
		cout << 'a'+k-1;
		while(cnt != n-1){
			cout << s[cnt%s.size()];
			cnt++;
		}
	}
	cout << "\n";
} 



