#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//map <int, int> mp;
struct ppl{
	int x, y, e, n, f, e2, n2;
};
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q, r, c;
	cin >> q;
	while(q--){
		ppl a, b;
		cin >> c >> r >> a.x >> a.y >> a.e >> a.n >> a.f; 
		cin >> b.x >> b.y >> b.e >> b.n >> b.f; 
		bool Catch = 0;
		if (a.x==b.x && a.y==b.y){
			cout << "Yes 0\n";
			continue;
		}
		int t = 0;
		a.e2 = a.e;
		a.n2 = a.n;
		b.e2 = b.e;
		b.n2 = b.n;
		while(a.f || b.f){
			//cout << "@" <<endl;
			if (a.n && a.f){
				a.y++;
				a.y %= r;
				a.n--;
			}else if (a.e && a.f){
				a.x++;
				a.x %= c;
				a.e--;
				if (a.e==0){
					a.n = a.n2;
					a.e = a.e2;
				}
			}
			if (b.e && b.f){
				b.x++;
				b.x %= c;
				b.e--;
			}else if (b.n && b.f){
				b.y++;
				b.y %= r;
				b.n--;
				if (b.n==0){
					b.e = b.e2;
					b.n = b.n2;
				}
			}
			if (a.f!=0) a.f--;
			if (b.f!=0) b.f--;
			//cout << a.x << " " << a.y << "A ";
		//	cout << b.x << " " << b.y << "B\n";
			t++;
			if (a.x==b.x && a.y==b.y){
				cout << "Yes "<<t<<"\n";
				Catch=1;
				break;
			}
		}
		if (!Catch){
			cout << "No\n";
		}
	}
} 


