#include <iostream>
#include <vector>
#define int long long
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
const int N = 1e7+10;
vector <int> seg_tre;
int arr[N];
int n, q;
void build(int low, int high, int root){
	if (low==high){
		seg_tre[root] = arr[low];
	}else{
		int mid = (low + high) / 2;
		build(low, mid, root*2+1);
		build(mid+1, high, root*2+2);
		seg_tre[root] = max(seg_tre[root*2+1] ,seg_tre[root*2+2]);
	}
}

int query(int a, int b, int l, int r, int root){
	if (r<a || l>b) return (1<<63);
	else if (l>=a && r<=b){
		return seg_tre[root];
	}else{
		int x, y;
		int mid = (l+r)/2;
		
		x = query(a, b, l, mid, root*2+1);
		y = query(a, b, mid+1, r, root*2+2);
		return max(x, y);
	}
}
signed main(void)
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> q;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	seg_tre.resize(4*n);
	build(0, n-1, 0);
	//for (auto i : seg_tre) cout << i << " ";
	for (int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		cout << query(min(a, b)-1, max(a, b)-1, 0, n-1, 0) << "\n";
	}
}




