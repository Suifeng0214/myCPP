#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
const int N = 2e6;
int arr[N];
int seg_tre[4*N];
void build(int l, int r, int root){
	if (l==r){
		seg_tre[root] = arr[l];
	}else{
		int mid = (l+r)/2;
		build(l, mid, root*2+1);
		build(mid+1, r, root*2+2);
		seg_tre[root] = max(seg_tre[root*2+1], seg_tre[root*2+2]);
	}
}

void modify(int a, int b, int l, int r, int root){
	if (a<l || a>r) return;
	if (a==l&&a==r){
		seg_tre[root] = b;
		return;
	}
	int mid = (l+r)/2;
	modify(a, b, l, mid, root*2+1);
	modify(a, b, mid+1, r, root*2+2);
	seg_tre[root] = max(seg_tre[root*2+1], seg_tre[root*2+2]);
}

int Q(int a, int b, int l, int r, int root){
	if (r<a || l>b) return -(1<<31);
	if (l>=a&&r<=b){
		return seg_tre[root];
	}else{
		int mid = (l+r)/2;
		int x = Q(a, b, l, mid, root*2+1);
		int y = Q(a, b, mid+1, r, root*2+2);
		return max(x, y);
	}
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	build(0, n-1, 0);
	
	int q;
	cin >> q;
	for (int i = 0; i < q; i++){
		char oper;
		int a, b;
		cin >> oper >> a >> b;
		if (oper == 'Q'){
			cout << Q(a-1, b-1, 0, n-1, 0)/2 << "\n";
		}else{
			modify(a-1, b, 0, n-1, 0);
		}
	}
}
