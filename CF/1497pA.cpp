//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
//set <int> st;
//map <int, int> mp;
bool used[1000];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;

	while(q--){
		memset(used, 0, sizeof used);
		vector<int>tmp;
		a.clear();
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.emplace_back(tmp);
//			cout <<tmp << " ";
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++){
			if (!used[a[i]]){
				cout << a[i] << " ";
				used[a[i]]=1;
			}else{
				tmp.emplace_back(a[i]);
			}
		}
		for (auto i : tmp) cout << i << " ";
		cout <<"\n";
	}	
} 


