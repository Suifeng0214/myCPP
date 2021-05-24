#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> arr;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, n, Max=-1, Min=10000000000, tmp, a, b, l, r, c=0;
	bool flag=0;
	cin >> q;
	while(q--){
		flag = 0;
		c=0;
		Max=-1; Min=10000000000;
		
		arr.clear();
		arr.reserve(200000);
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> tmp;
			arr.push_back(tmp);
			Max = (Max > tmp)? Max : tmp;
			Min = (Min < tmp)? Min : tmp;
		}
		for (int i = 0; i < arr.size()-1; i++){
			a = arr[i];
			b = arr[i+1];
			if (abs(a-b) >= 2){
				l = i;
				r = i+1;
				c=1;
				break;
			}
		}
		if (c){
			cout << "YES\n" << l+1 << " " << r+1 << "\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
} 
