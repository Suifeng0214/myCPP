#include <bits/stdc++.h> 

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b, first, tmp, sum=0;
	cin >> a >> b >> first;
	while (cin >> tmp){
		sum += tmp;
	}
	sum++;
	if (first == 0){
		if (sum & 1){
			cout << "Ivy Win!\n";
		}else{
			cout << "Holly Win!\n";
		}
	}else{
		if (sum & 0){
			cout << "Ivy Win!\n";
		}else{
			cout << "Holly Win!\n";
		}
	}
}

