//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
vector <int> a, b;
int n;
//set <int> st;
//map <int, int> mp;
unordered_map <int, int> used;
bool check(){
	int m = b.size();
	for (int i = 0; i < m; i++){
		for (int j = 0; j < m; j++){
			if (i == j) continue;
			int x = abs(b[i]-b[j]);
			if (!used[x]){
				b.emplace_back(x);
				used[x] = 1;
				return 1;
			}
		}
	}
	return 0;
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		b.clear();
		used.clear();
		cin >> n;
		int tmp;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			if (used[tmp]){
				if (!used[0])
					b.emplace_back(0);
				continue;
			}
			used[tmp] = 1;
			b.emplace_back(tmp);
		}
		int cnt=0;
		while(check()){
			cnt++;
			if (cnt > 1000) break;
		}
		cout << "YES\n";
		for (int i = 0; i < b.size(); i++){
			cout << b[i] << " \n"[i==b.size()-1];
		}
	}
} 


