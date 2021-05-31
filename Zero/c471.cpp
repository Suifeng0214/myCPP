//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define F first
#define S second
#define lowbit(x) (x&-x)
#define MP(x, y) make_pair(x, y)
#define PII pair<int, int>
const int N = 1e5+5;
int w[N], f[N];
long long int pre[N];
bool cmp(PII a, PII b){
	return a.F*b.S < b.F*a.S;
}
vector <pair <int, int> > arr;
signed main() 
{ 
//	freopen("in.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> w[i];
	}
	for (int i = 0; i < n; i++){
		cin >> f[i];
	}
	for (int i = 0; i < n; i++){
		arr.emplace_back(w[i], f[i]);
	}
	sort(arr.begin(), arr.end(), cmp);
	pre[0] = arr[0].F;
	long long ans = 0;
	for (int i = 1; i < n; i++){
	//	cout << pre[i-1] << " " << arr[i].F << " " << arr[i].S << "@" << endl;
		pre[i] = pre[i-1] + arr[i].F;
		ans += pre[i-1] * arr[i].S;
	}
	cout << ans << "\n";
}
