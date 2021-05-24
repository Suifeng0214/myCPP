#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
//priority_queue <int> pq_l; //largest  
//priority_queue <int, vector<int>, greater<int>> pq_s; //
const int N = 5e5+5;
short arr[N];
int tree[4*N];
int tag[4*N];
#define MID (l+r)/2
#define lson root*2+1
#define rson root*2+2

void modify(int a, int b, int k, int l, int r, int root){
	tree[root]+=tag[root]*(r-l+1);
	if (l!=r){
		tag[lson]+=tag[root];
		tag[rson]+=tag[root];
	}
	tag[root] = 0;
	if (r<a || l>b) return;
	if (l>=a && r<=b){
		tree[root] += k*(r-l+1);
            if (l!=r){
		    tag[lson] += k;
		    tag[rson] += k;
            }
	}else{
		int mid = MID;
		modify(a, b, k, l, mid, lson);
		modify(a, b, k, mid+1, r, rson);
		tree[root] = tree[lson]+tree[rson];
	}
}

int Q(int a, int b, int l, int r, int root){
	tree[root]+=tag[root]*(r-l+1);
	if (l!=r){
		tag[lson]+=tag[root];
		tag[rson]+=tag[root];
	}
	tag[root] = 0;
	if (r<a || l>b) return 0;
	if (l>=a && r<=b){
		return tree[root];
	}else{
		int mid = MID;
		int L = Q(a, b, l, mid, lson);
		int R = Q(a, b, mid+1, r, rson);
		return L+R;
	}
}

void build(int l, int r, int root){
	if (l==r){
	   tree[root] = arr[l];
	   return;
	}
	int mid = MID;
	build(l, mid, lson);
	build(mid+1, r, rson);
	tree[root] = tree[lson]+tree[rson];
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	build(0, n-1, 0);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++){
		int oper;
		cin >> oper;
		if (oper==1){
			int a, b, k;
			cin >> a >> b >> k;
			modify(a-1, b-1, k, 0, n-1, 0);
		}else{
			int a, b;
			cin >> a >> b;
			cout << Q(a-1, b-1, 0, n-1, 0) << "\n";
		}
	}

} 