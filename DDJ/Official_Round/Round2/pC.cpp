//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
priority_queue <int > pq;
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	vector <pair<int, int> > arr;
	while(q--){
		while(!pq.empty())	pq.pop();
		arr.clear();
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int t, d;
			cin >> t >> d;
			arr.emplace_back(d, t);
		}
		sort(arr.begin(), arr.end());
		int ans = 0, now = 0;
		for (int i = 0; i < n; i++){
			if (now + arr[i].S <= arr[i].F){
				now += arr[i].S;
				pq.emplace(arr[i].S);
				ans++;
			}else{
				if (!pq.empty() && now - pq.top() + arr[i].S <= arr[i].F){
					now -= pq.top();
					now += arr[i].S;
					pq.pop();
					pq.emplace(arr[i].S);
				}
			}
		}
		cout << ans << "\n";
	}
}
