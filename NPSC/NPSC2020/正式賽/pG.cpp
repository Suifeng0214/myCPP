#include <bits/stdc++.h>
using namespace std;
//#define int long long
vector <int> oper;
//set <int> st;
//map <int, int> mp;
const int MAX = 1e6+10;
int pos[MAX];
int dsu[MAX];
int size[MAX];
int find(int x){
	return x == dsu[x] ? x : find(dsu[x]);
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, q;
	cin >> n >> q;
	int tmp;
	int now = 1;
	for (int i = 1; i <= n; i++) pos[i] = i, dsu[i] = i, size[i] = 1;
	for (int i = 0; i < q; i++){
		int ans = 0;
		cin >> tmp;
		now++;
		bool flag=0;
		for (int j = now; j < now+tmp; j++){
			if (dsu[j] == j){
				ans++;
			}else{
				ans += pos[j] - pos[dsu[j]];
			}
		//	cout << pos[j] << "@" << pos[dsu[j]] << "#" << "\n";
			//dsu[now+tmp] = dsu[find(now+tmp-1)];
			pos[j] = pos[j-1];
		}
		cout << ans << " ";
	}
} 


