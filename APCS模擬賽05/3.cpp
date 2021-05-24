#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
//priority_queue <int> pq_l; //largest  
//priority_queue <int, vector<int>, greater<int>> pq_s; //s
void init();
void solve();
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int t;
		cin >> t;
		a.clear();
		int tmp;
		for (int i = 0; i < t; i++){
			cin >> tmp;
			a.emplace_back(tmp); 
		}
	
		sort(a.begin(), a.end());
		int ans = 10000000;
		for (int i = 0; i < a.size()-1; i++){
			ans = min(ans, a[i+1] - a[i]);
		}
		cout << ans << '\n';
	}
} 

void init()
{
	
}

void solve()
{

}
 
