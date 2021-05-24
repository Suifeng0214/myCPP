#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <int> a;
	int q, t, tmp, day, ans=0, n, mid, m, k;
	cin >> q;
	while(q--){
		a.clear();
		int MAX=-2, MIN= 1e9+10;
		cin >> t;
		while(t--){
			cin >> tmp;
			a.emplace_back(tmp);
		}
		if (a[0] == -1){
			if (a[1] != -1){
				MAX = (a[1] > MAX)? a[1] : MAX;	
				MIN = (a[1] < MIN)? a[1] : MIN;
			}
		}
		if (a[a.size()-1] == -1){
			if (a[a.size()-2] != -1){
				MAX = (a[a.size()-2] > MAX)? a[a.size()-2] : MAX;	
				MIN = (a[a.size()-2] < MIN)? a[a.size()-2] : MIN;
			}
		}
		for (int i = 1; i < a.size()-1; i++){
			if (a[i] == -1){
				if(a[i-1] != -1){
					MAX = (a[i-1] > MAX)? a[i-1] : MAX;	
					MIN = (a[i-1] < MIN)? a[i-1] : MIN;
				}
				if(a[i+1] != -1){
					MAX = (a[i+1] > MAX)? a[i+1] : MAX;	
					MIN = (a[i+1] < MIN)? a[i+1] : MIN;
				}
				
			}
		}
		
		mid = (MAX + MIN) / 2;
		if (MAX == -2 && MIN == 1e9+10) mid=0;

		int mm = -2;
		for (int i = 0; i < a.size(); i++){
			if (a[i] == -1) a[i]=mid;
		}
		for (int i = 0; i < a.size()-1; i++){
			mm = (abs(a[i] - a[i+1]) > mm)? abs(a[i] - a[i+1]) : mm;
		}
		
		cout << mm << " " << mid << "\n";
		//cout << MAX << "@" << MIN << '\n'; 
	}
	return 0;
} 
