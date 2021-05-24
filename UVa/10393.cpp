//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
unordered_set <char> st[10];
unordered_set <string> ck;
vector <string> ans;
bitset <11> no;
void go();
signed main(){
	int F, N;
	ios::sync_with_stdio(0);
	cin.tie(0);
	go();
	freopen("out.txt", "w", stdout);
	while(cin >> F >> N){
		no.reset();
		ck.clear();
		ans.clear();
		for (int i = 0; i < F; i++){
			int tmp;
			cin >> tmp;
			no[tmp-1] = 1;
		}
		cin.ignore();
		string s;
		int len=-1;
		for (int i = 0; i < N; i++){
			cin >> s;
			if (ck.count(s)) continue;
			ck.insert(s);
			bool flag = 0;
			for (int j = 0; j < s.size(); j++){
				for (int k = 0; k < 10; k++){
					if (no[k] == 0 || k==4 || k==5) continue;
					if (st[k].count(s[j])){
						flag = 1;
						break;
					}
				}
				if (flag) break;
			}
			if (!flag) ans.emplace_back(s), len = max(len, (int)s.size());
		}
		sort(ans.begin(), ans.end());
		queue<string>Q;
		int cnt = 0;
		for (int i = 0; i < ans.size(); i++){
			if (ans[i].size() == len)
				Q.emplace(ans[i]), cnt++;
		}
		cout << cnt << "\n";
		while(!Q.empty()){
			cout << Q.front() << "\n";
			Q.pop();	
		}
		
	}
}

void go(){
	st[0].insert('q');
	st[0].insert('a');
	st[0].insert('z');

	st[1].insert('w');
	st[1].insert('s');
	st[1].insert('x');

	st[2].insert('e');
	st[2].insert('d');
	st[2].insert('c');

	st[3].insert('r');
	st[3].insert('f');
	st[3].insert('v');
	st[3].insert('t');
	st[3].insert('g');
	st[3].insert('b');

	st[6].insert('y');
	st[6].insert('h');
	st[6].insert('n');
	st[6].insert('u');
	st[6].insert('j');
	st[6].insert('m');

	st[7].insert('i');
	st[7].insert('k');
	st[7].insert(',');

	st[8].insert('o');
	st[8].insert('l');
	st[8].insert('.');

	st[9].insert('p');
	st[9].insert(';');
	st[9].insert('/');
}
