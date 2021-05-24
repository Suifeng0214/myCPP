#include <bits/stdc++.h>
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int m, d;
		cin >> m >> d;
		int now = 0;
		for (int i = 1; i < m; i++){
			switch(i){
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
					now += 31;
					break;
				case 2: 
					now += 28;
					break;
				case 4: case 6: case 9: case 11:
					now += 30;
					break;
			}
		}
		now += d;
		int dayy = now % 7;
		string ans;
		switch(dayy){
			case 0:
				ans = "Friday";
				break;
			case 1:
				ans = "Saturday";
				break;
			case 2:
				ans = "Sunday";
				break;
			case 3:
				ans = "Monday";
				break;
			case 4: 
				ans = "Tuesday";
				break;
			case 5:
				ans = "Wednesday";
				break;
			case 6:
				ans = "Thursday";
				break;
		}
		cout << ans << "\n";
	}
}
