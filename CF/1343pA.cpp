#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int a[65];
signed main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	a[0] = 1;
	for (int i = 1; i < 60; i++){
		a[i] = a[i-1] + (int)pow(2, i);
	}
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		for (int i = 1; i < 60; i++){
			if (n%a[i]==0){
				cout << n/a[i] << "\n";
				break;
			} 
		}
	}
	//for (int i : a)cout << i << "\n";
	//auto it1 = lower_bound() 
}


