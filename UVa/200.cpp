//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
int in[30];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	//4:30
	string s, last;
	vector <int> _in[30], _out[30];
	map <char, int> mp;
	cin >> last;
	for (auto i : last) mp[i]++;
	while(cin >> s){
	//	cout << last << "\t" << s  << endl;
		if (s=="#") break;
		for (auto i : s) mp[i]++;
		int n = s.size(), ln = last.size();
		for (int i = 0; i < min(n, ln); i++){
			if (last[i] != s[i]){
				_in[s[i]-'A'].emplace_back(last[i]-'A');
				_out[last[i]-'A'].emplace_back(s[i]-'A');
				in[s[i]-'A']++;
				break;
			}
		}
		last = s;
	}
	queue <char> q;
	for (auto i : mp){
		if (in[i.first-'A'] == 0){
			q.emplace(i.first);
		}
	}
	bitset <100> used;
	while(!q.empty()){
		char now = q.front();
		used[now-'A']=1;
		for (int i = 0; i < _out[now-'A'].size(); i++){
			int tmp = _out[now-'A'][i];
			in[tmp]--;
			if (!in[tmp] && !used[tmp]){
				q.emplace((char)(tmp+'A'));
			}
		}
		cout << now;
		q.pop();
	}
	cout << "\n";
    return 0;
}
