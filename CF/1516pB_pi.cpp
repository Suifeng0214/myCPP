//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int arr[100000];
int n;
int ouo=0;
vector <int> a;
bool ok=0;
void dfs(int now, int cnt){
	if (now == 0){
		int pos = 0;
		int lastxor=0;
		for (int i = 1; i <= cnt; i++){
			int tmpxor=0;
			for (int j = pos; j < pos+arr[i]; j++){
				tmpxor ^= a[j];
			}
			pos = pos + arr[i];
			if (i==1){
				lastxor = tmpxor;
			}else if (tmpxor != lastxor){
				break;
			}else if (i==cnt){
				ok=1;
			}
		}
		//cout << "\n";
		ouo++;
		return;
	}
	for (int i = 1; i <= n; i++){
		if (now - i < 0) continue;
		now -= i;
		cnt++;
		arr[cnt] = i;
		dfs(now, cnt);
		now += i;
		cnt--;
	}
}
signed main() 
{ 
//	freopen("in.txt", "r", stdin);
//	freopen("pi.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		a.clear();
		ok=0;
		cin >> n;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
		}
		dfs(n, 0);
		cout << ((ok)? "YES\n" : "NO\n");
	}
	//cout << ouo << "\n";
} 



