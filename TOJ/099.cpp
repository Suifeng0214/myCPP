#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	double a, b, c, d;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b >> c >> d;
	if (abs(a * d - b * c) < 0.0000001){
		cout << 0 << "\n";
	}else{
		cout << 1 << "\n";
	}
	return 0;
}
