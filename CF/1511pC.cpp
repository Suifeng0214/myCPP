//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
vector <int> arr;
int fir_idx[55];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, q;
	cin >> n >> q;
	bitset <100> used;
	for (int i = 1; i <= n; i++){
		int tmp;
		cin >> tmp;
		arr.emplace_back(tmp);
		if (used[tmp] == 0){
			fir_idx[tmp] = i;
			used[tmp] = 1;
		}
	}
	for (int i = 0; i < q; i++){
		for (int j = 1; j < 10; j++){
		//	cout << fir_idx[j] << " ";
		}
	//	cout << "\n";
		int tmp;
		cin >> tmp;
		cout << fir_idx[tmp] << " ";
		int tmp_idx = fir_idx[tmp];
		for (int j = 1; j <= 55; j++){
			if (fir_idx[j] <= tmp_idx)
				fir_idx[j]++;
		}
		fir_idx[tmp] = 1;
	}
} 


