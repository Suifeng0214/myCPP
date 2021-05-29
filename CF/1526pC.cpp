//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
priority_queue <int, vector<int>, greater<int> > pq;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int tmp, ans = 0, now = 0;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		if (now+tmp >= 0){
			ans++, now += tmp;
			if (tmp < 0) pq.emplace(tmp);
		}else{
			if (!pq.empty() && pq.top() < tmp){
				now -= pq.top();
				now += tmp;
				pq.pop();
				pq.emplace(tmp);
			}
		}
	}
	cout << ans << "\n";
} 


