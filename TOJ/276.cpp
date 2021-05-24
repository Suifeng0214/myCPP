#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	long long x, y;
	int times;
	cin >> times;
	while(times--){
		cin >> x >> y;
		if (x <= 0 && (x%2==0 || y%2==0)){
			cout << "YES\n";
		}else if (x >= 1 && (x%2==1 || y%2==0)){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
