#include <bits/stdc++.h>
#define int long long
#define lowbit(x) (x&-x)
using namespace std;
const int N = 1e6+5;
int n;
int arr[N];
int cnt[N];
int BIT[N];
int cnt_BIT[N];
int query2(int x){
	int ret = 0;
	for (; x > 0; x -= lowbit(x)){
		ret += cnt_BIT[x];
	}
	return ret;
}
void update2(int x, int val){
	for (; x <= n; x += lowbit(x)){
		cnt_BIT[x] += val;
	}
}
int query(int x){
	int ret = 0;
	for (; x > 0; x -= lowbit(x)){
		ret += BIT[x];
	}
	return ret;
}
void update(int x, int val){
	for (; x <= n; x += lowbit(x)){
		BIT[x] += val;
	}
}
signed main(){
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++){
		cin >> arr[i];
		cnt[i] = query(arr[i]);
	//	cout << cnt[i] << "@ ";
		update2(arr[i]+1, cnt[i]);
	//	cout << query2(arr[i]) << "#\n";
		ans += query2(arr[i]);
		update(arr[i], 1);
	}
	cout << ans << "\n";
}
