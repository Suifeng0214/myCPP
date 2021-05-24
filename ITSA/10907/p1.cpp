#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int mp[110][10];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	double avg=0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 5; j++){
			cin >> mp[i][j];
			avg += mp[i][j];
		}
	}
	double ans[5];

	for (int i = 0; i < 5; i++){
		double sum = 0;
		for (int j = 0; j < n; j++){
			sum += mp[j][i];
		}
		ans[i] = sum/n;
		//avg += ans[i];
	}
	cout << fixed << setprecision(1) << round(avg/(5*n)) << " ";
	for (int i = 0 ; i < 5; i++){
		cout << fixed << setprecision(1) << round(ans[i]);
		if (i!=4) cout << " ";
	}
	cout << "\n";
} 


