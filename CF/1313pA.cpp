#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	LL t;
	cin >> t;
	while(t--){
		LL dump, berry, cake, ans=0;
		cin >> dump >> berry >> cake;
		if (dump > 0){
			ans++; dump--;
		}
		if (berry > 0){
			ans++; berry--;
		}
		if (cake > 0){
			ans++; cake--;
		}
		bool c1=0, c2=0, c3=0;
		if (max(dump, max(berry, cake)) == dump){
			if (dump > 0 && berry > 0){ //1
				ans++;
				dump--; berry--;
				c1=1;
			}
			if (dump > 0 && cake > 0){ //3
				ans++;
				dump--; cake--;
				c3=1;
			}
		}else if (max(dump, max(berry, cake)) == berry){
			if (dump > 0 && berry > 0){ //1
				ans++;
				dump--; berry--;
				c1=1;
			}
			if (berry > 0 && cake > 0){ //2
				ans++;
				berry--; cake--;
				c2=2;
			}
		}else{
			if (berry > 0 && cake > 0){ //2
				ans++;
				berry--; cake--;
				c2=1;
			}
			if (dump > 0 && cake > 0){ //3
				ans++;
				dump--; cake--;
				c3=1;
			}
		}
		
		if (!c1)
		if (dump > 0 && berry > 0){ //1
			ans++;
			dump--; berry--;
		}
		
		if (!c2)
		if (berry > 0 && cake > 0){ //2
			ans++;
			berry--; cake--;
		}
		
		if (!c3)
		if (dump > 0 && cake > 0){ //3
			ans++;
			dump--; cake--;
		}
		
		if (dump > 0 && cake > 0 && berry > 0){
			ans++;
			dump--; cake--; berry--;
		}
		cout << ans << "\n"; 
	}
	
} 

