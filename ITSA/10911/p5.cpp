#include <bits/stdc++.h>
using namespace std;
#define int long long
vector <int> a;
vector <int> b;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	double a = 1234;
	int n = a/10;
	int x=0;
	while(n){
		n/=10;
		x++;
	}	
	cout << setprecision(x)<<scientific << a << "\n";
}
