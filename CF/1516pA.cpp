//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int n, k;
		cin >> n >> k;
		//cout << n<<"@" << k << "\n";
		vector <int> a(n);
		int sum = 0, pos=n-2, tmpsum = 0;
		bool ck=0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			sum += a[i];
			if (sum > k && !ck){
				ck=1;
				tmpsum = sum;
				pos = i;
			}
		}
		if (k < a[0]) a[0] -= k;
		if (k >= sum-a[a.size()-1]){
			for (int i = 0; i < n-1; i++){
				cout << "0 ";
			}
			cout << sum << "\n";
			continue;
		}
		for (int i = 0; i < pos; i++){
			a[i] = 0;
		}
		a[pos] -= (k - tmpsum+a[pos]);
		for (int i = 0; i < n-1; i++){
			cout << a[i] << " ";
		}
		cout << a[a.size()-1] + k << "\n";
	}
} 


