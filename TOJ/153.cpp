#include <bits/stdc++.h> 
using namespace std;
#define int long long
#define eps 1e-8
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int q;
	cin >> q;
	while(q--) {
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		if (a[0] + a[1] <= a[2] || a[0] < 0){
			cout << "illegal triangle\n";
			continue;
		}
		int tmp = a[0] * a[0] + a[1] * a[1];
		if (tmp == a[2] * a[2]){
			cout << "right triangle\n";
		}else if (tmp > a[2] * a[2]){
			cout << "obtuse triangle\n";
		}else{
			cout << "acute triangle\n";
		}
	}
}


