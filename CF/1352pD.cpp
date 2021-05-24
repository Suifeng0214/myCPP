#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
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
		a.clear();
		int n;
		cin >> n;
		int sum = 0;
		int cnt=0, aa=0, bb=0;
		int now = 0; 
		while(n--){
			int tmp;
			cin >> tmp;
			sum += tmp;
			a.emplace_back(tmp);
		}
		bool alice = 1;
		int remain = sum;
		now = 0;
		int time_a=0, time_b=0;
		while(remain > 0){
			cnt++;
			int tmp_eat=0;
			if (alice){
				if (remain <= now){
					aa += remain;
					remain = 0;
					break;
				}else{
					int tmp_now = now;
					tmp_eat += a[0+time_a];
					aa += a[0+time_a]; remain -= a[0+time_a];
					while(tmp_eat < now){
						time_a++;
						tmp_eat += a[0+time_a];
						aa += a[0+time_a]; remain -= a[0+time_a];
						now = max(now, tmp_eat);
					}
					now = max(now, tmp_eat) + 1;
				}
				time_a++;
			}else{
				if (remain <= now){
					bb += remain;
					remain = 0;
					break;
				}else{
					int tmp_now = now;
					tmp_eat += a[a.size()-1-time_b];
					bb += a[a.size()-1-time_b]; remain -= a[a.size()-1-time_b];
					while(tmp_eat < now){
						time_b++;
						tmp_eat += a[a.size()-1-time_b];
						bb += a[a.size()-1-time_b]; remain -= a[a.size()-1-time_b];
						now = max(now, tmp_eat);
					}
					now = max(now, tmp_eat) + 1;
				}
				time_b++;
			}
			alice = !alice;
		}
		cout << cnt << " " << aa << " " << bb << "\n";
	}
} 


