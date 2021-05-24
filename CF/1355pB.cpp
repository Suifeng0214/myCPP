#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//priority_queue <int> pq_l; //largest  
//priority_queue <int, vector<int>, greater<int>> pq_s; //s
void init();
int mp[(int)3e5+10];
void solve();
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		solve();
	}
} 

void init()
{
	
}

void solve()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> mp[i];
	}
	sort(mp, mp+n);
	int ans = 0;
	for (int i = 0, now=0, cnt=0; i < n; i++){
		now = max(now, mp[i]);
		cnt++;
		if (cnt >= now){
			ans++;
			cnt=0;
		} 
	}
	cout << ans << "\n";
}
 
