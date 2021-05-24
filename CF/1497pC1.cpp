//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int __lcm(int a, int b){
	return __gcd(a, b) * (a/__gcd(a, b)) * (b/__gcd(a, b));
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		if (a&1){
			cout << "1 " << a/2 << " " << a/2 << "\n";
		}else{
			if (a%4==0)
				cout << a/4 << " " << a/4 << " " << a/2 << "\n";
			else{
				a-=2;
				cout << "2 " << a/2 << " " << a/2 << "\n";
			}
		}
	}	
} 


