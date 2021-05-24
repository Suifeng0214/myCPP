#include <iostream>
using namespace std;
#define int long long

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, b, tmp, ans=0, one=0, two=0, half=0;
	cin >> n >> a >> b;
	one = a;
	two = b;
	while(n--){
		cin >> tmp;
		if (tmp == 1){
			if (one){
				one--;
			}else if (two){
				two--;
				half++;
			}else if (half){
				half--;
			}else{
				ans++;
			}
		}
		if (tmp == 2){
			if (two)
				two--;
			else ans+=2;
		}
	}
	cout << ans;
} 


