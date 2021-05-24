//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
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
		int n;
		cin >> n;
		int ans = -1;
		int tmp;
		vector <int> arr, tmp2;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			arr.emplace_back(tmp);
		}
		tmp2 = arr;
		sort(arr.begin(), arr.end());
		if (arr[0] != arr[1]){
			ans = arr[0];
		}else{
			ans = arr[arr.size()-1];
		}
		for (int i = 0; i < arr.size(); i++){
			if (tmp2[i] == ans)cout << i+1 << "\n";
		}
	}	
} 


