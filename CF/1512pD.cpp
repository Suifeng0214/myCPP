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
		vector <int> arr, sumN(n+5);
		for (int i = 0; i < n+2; i++){
			int tmp;
			cin >> tmp;
			arr.emplace_back(tmp);
		}
		sort(arr.begin(), arr.end());
		int sum =0;
		sumN[0] = arr[0];
		for (int i = 1; i < n+1; i++){
			sum += arr[i];
			sumN[i] = sumN[i-1]+arr[i];
		}
		int x_pos;
		bool find = 0;
		for (int i = 0; i < n+1; i++){
			if (arr[n+1]  == sumN[n] - arr[i]){
				x_pos = i;
				find = 1;
				break;
			}
		}
		if (find){// sum at n+2
			for (int i = 0; i < x_pos; i++){
				cout << arr[i] << " ";
			}
			for (int i = x_pos+1; i < n+1; i++){
				cout << arr[i] << " ";
			}
			cout << "\n";
		}else{
			if (sumN[n-1] != arr[n]){
				cout << "-1\n";
				continue;
			}
			for (int i = 0; i < n; i++){
				cout << arr[i] << " ";
			}
			cout << "\n";
		}
	}	
} 


