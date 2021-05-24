#include <bits/stdc++.h>
using namespace std;

#define ing long long

signed main(){
	int n;
	cin >> n;
	int a, b, c, now = 0, z=0;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		if (tmp == 0){
			z++;
			continue;
		}
		if (tmp & 1){
			now -= tmp;
		}else{
			now += tmp;
		}
	}
	a = now - 5*z;
	b = now + 6*z;
	c = abs(a-b);
	cout << a << " " << b << " " << c << "\n";
} 
