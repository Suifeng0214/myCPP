#include <bits/stdc++.h>
#define F first
#define S second
#define EB emplace_back
using namespace std;
vector <int> _out[30];
bitset <30> used;
vector <char> nxt[30];
map <char, int> mp;
int in[30];
char ans[30];
void dfs(int now, int x, int size){
	char tmp = nxt[now][x];
	used[tmp-'a'] = 1;
//	cout << tmp << endl;
	ans[now] = tmp;
//	cout << "@" << endl;
	if (now == size-1){
		for (int i = 0; i < size; i++){
			cout << ans[i];
		}
		cout << "\n";
		used[tmp-'a'] = 0;
		return;
	}
	nxt[now+1].clear();
	for (int j = 0; j < _out[tmp-'a'].size(); j++){
		int tmpp = _out[tmp-'a'][j];
		in[tmpp]--;
	}
	for (auto i : mp){
		if (in[i.F-'a'] == 0 && used[i.F-'a'] == 0) nxt[now+1].emplace_back(i.F);
	}
	for (int i = 0; i < nxt[now+1].size(); i++){
		dfs(now+1, i, size);
	}
	used[tmp-'a'] = 0;
	for (int j = 0; j < _out[tmp-'a'].size(); j++){
		int tmpp = _out[tmp-'a'][j];
		in[tmpp]++;
	}
}
int main()
{
//	freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
	string a, b;
	bool fk=0;
	while(getline(cin, a)){
		if (fk) cout << "\n";
		fk=1;
		for (int i = 0; i < 30; i++){
			_out[i].clear();
			nxt[i].clear();
		}
		used.reset();
		memset(in, 0, sizeof in);
		mp.clear();
		getline(cin, b);
//		cout << a << "@" << b << endl;
		stringstream ss(a), ss2(b);
		char tmpc;
		while (ss >> tmpc){
			mp[tmpc]++;
		}
		char x, y;
		while (ss2 >> x >> y){
//			cout << x << "@" << y << endl;
			_out[x-'a'].EB(y-'a');
			in[y-'a']++;
		}
		for (auto i : mp){
			if (in[i.F-'a'] == 0){
				nxt[0].EB(i.F);
			}
		}
		for (int i = 0; i < nxt[0].size(); i++)
			dfs(0, i, mp.size());
	}
    return 0;
}
