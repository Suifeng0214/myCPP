#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
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
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int a2 = 2*a, b2=2*b;
		if (a2 < b || b2 < a){
			cout << max(a, b) * max(a, b) << "\n";
			continue; 
		}
		cout << min(a2, b2) * min(a2, b2) << "\n";
	}
} 
 
void init()
{
	
}
 
void solve()
{
 
}
