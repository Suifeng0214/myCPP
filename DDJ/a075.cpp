//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define X first
#define Y second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
int a[5000000];
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k, cnt=0;
	while(cin >> n >> k){
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int now=0, l=0, r=0;
		while(cnt < n){
			if (r>=n) return 0;
			now += a[r];
		//	cout << now << endl;
			if (now == k){
				cout << r+1 << " \n"[++cnt==n];
				if (l>=n) return 0;
				now -= a[l];
				l++;
			}else if (now > k){
				while(now > k){
					cout << r << " \n"[++cnt==n];
					if (l>=n) return 0;
					now -= a[l];
				//	cout << now << "@" << endl;
					l++;
				}
			}
			r++;
			if (r > n-1){
				while(cnt < n){
					cout << n << " \n"[++cnt==n];
				}
			}
		}
	}
}
