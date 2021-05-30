//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
priority_queue <int, vector <int>, greater<int> > pq;
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	while(cin >> n){
		if (n==0) break;
		while(!pq.empty()) pq.pop();
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			pq.emplace(tmp);
		}
		int ans = 0;
		while(!pq.empty()){
			int a = pq.top();
			int b;
			pq.pop();
			if (pq.empty()){
			//	ans+=a;
				break;
			}else{
				b = pq.top();
				pq.pop();
			}
			ans += a+b;
			pq.emplace(a+b);
		}
		cout << ans << "\n";
	}
}
