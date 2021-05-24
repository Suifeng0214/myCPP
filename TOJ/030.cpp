#include <bits/stdc++.h>
using namespace std;
int _check(int n);
int temp[1000010];
vector <int> prime;
int main(void)
{
	ios::sync_with_stdio(0);
//	cin.tie(0);
	int flag = 0;
	prime.reserve(79000);
	for (int i = 2; i <= 1100000; i++){
		flag = 0;
		for (int j = 2; j <= sqrt(i); j++){
			if (i % j == 0){
				flag = 1;
				break;
			}
		}
		if (flag == 0){
			prime.push_back(i);
		}
	}
	/*for (int i = 0; i < 78498; i++){
		cout << prime[i] << "\n";
	} */
		
	int n;
	while (cin >> n){
			cout << _check(n) << "\n";
		}

	
	return 0;
}

int _check(int n)
{
		int x, i=0;
		for (x = 0; i <= n; x++){
			i=prime[x];
			//cout << x << "\n";	
		}
		return x-1;
}

