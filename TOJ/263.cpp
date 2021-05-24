#include <iostream>
#include <vector>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

struct node{
	node *l, *r;
	int val, pri, size, ma;
	node(int k):l(0), r(0), val(k), pri(rand()), size(1), ma(k){}
	void up();
}*Treap;

int size(node *o){return o? o->size : 0;}

void split(node *o, node *&a, node *&b, int k){
	if (!o){
		a=b=0;
		return;
	}else{
		if (size(o->l) < k){
			a=o;
			split(o->r, a->r, b, k-size(o->l)-1);
			a->up();
		}else{
			b=o;
			split(o->l, a, b->l, k);
			b->up();
		}
	}
}

node *merge(node *a, node *b){
	if (!a||!b) return a? a : b;
	if (a->pri < b->pri){
		a->r = merge(a->r, b);
		a->up();
		return a;
	}else{
		b->l = merge(a, b->l);
		b->up();
		return b;
	}
}

void insert(node *&root, int x, int y){
	node *a, *b;
	split(root, a, b, x-1);
	root = merge(a, merge(new node(y), b));
}

void erase2(node *&o, int k){
	if (!o) return;
	node *a, *b, *c;
	split(o, a, c, k);
	split(a, a, b, k-1);
	delete b;
	o = merge(a, c);
}
void chang(node *&o, int x, int y){
	node *a, *b, *c;
	split(o, a, c, x);
	split(a, a, b, x-1);
	b->val = y;
	b->ma = y;
	o = merge(a, merge(b, c));
}
void node::up(){
	size = 1;
	ma = val;
	if (l){
		size+=l->size;
		ma = max(l->ma, ma);
	}
	if (r){
		size+=r->size;
		ma = max(r->ma, ma);
	}
}
int query(node *&root, int l, int r){
	node *a, *b, *c;
	split(root, b, c, r);
	split(b, a, b, l-1);
	int ret = b->ma;
	root = merge(a, merge(b, c));
	return ret;
}
void del(node *&o){
	if (!o) return;
	del(o->l);
	del(o->r);
	delete o;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, q;
	int now;
	while(cin >> n >> q){
		Treap = 0;
		int tmp;
		for (int i = 1; i <= n; i++){
			cin >> tmp, Treap = merge(Treap, new node(tmp));
		}

		for (int i = 0; i < q; i++){
			int type, x, y;
			cin >> type >> x;
			if (type == 1){
				cin >> y;
				chang(Treap, x, y);
			}else if (type == 2){
				cin >> y;
				cout << query(Treap, x, y) << "\n";
			}else if (type == 3){
				cin >> y;
				insert(Treap, x, y);
			}else{
				erase2(Treap, x);
			}
		}
		del(Treap);
	}
}
