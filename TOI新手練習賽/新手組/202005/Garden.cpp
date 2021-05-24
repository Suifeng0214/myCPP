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
int mp[30];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	mp[0] = 5;
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, last;
	cin >> n;
	for (int i = 1; i<=n;i++){
		cin >> mp[i];
		if (mp[i]==1) last = i;
	}
	mp[n+1] = 5;
	int cnt = 0;
	bool find=0;
	for (int i = 1; i <= n; i++){
		if (mp[i]==1) find = 1;
		if (find && i < last)
			if (mp[i] == 0 && mp[i-1]!=9 &&mp[i+1]!=9){
				cnt++;
			}
	}
	cout << cnt << "\n"; 
} 

void init()
{
	
}

void solve()
{

}
 
