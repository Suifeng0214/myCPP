//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
int in[110];
int main()
{
//	freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
	//4:07
	int n, m;
	while(cin >> n >> m){
		if (n == 0 && m == 0) break;
		vector <int> _in[110], _out[110];
		memset(in, 0, sizeof in);
		for (int i = 0; i < m; i++){
			int a, b;
			cin >> a >> b;
			_in[b].emplace_back(a);
			_out[a].emplace_back(b);
			in[b]++;
		}
		queue <int> q;
		for (int i = 1; i <= n; i++){
			if (in[i] == 0) q.emplace(i);
		}
		while(!q.empty()){
			int now = q.front();
			for (auto i : _out[now]){
				in[i]--;
				if (!in[i]){
					q.emplace(i);
				}
			}
			q.pop();
			cout << now;
			if (!q.empty()) cout << " ";
		}
		cout << "\n";
	}
    return 0;
}
