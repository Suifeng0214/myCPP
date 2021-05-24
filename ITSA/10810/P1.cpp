#include <bits/stdc++.h> 
using namespace std;

int main(void)
{
	long double r, sum=0, p;
	long long  n;
	cin >> r >> n >> p;
	for (int i = 0; i < n; i++){
		p += p * r;
		sum += p;
	}
	cout << floor(sum);
}


