#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned long long int pm;
	cin >> pm;
	
	if (pm < 10){
		cout << "Y" << "\n";
	}else if (10 <= pm && pm < 1000){
		cout << "X" << "\n";
	}else if (1000 <= pm && pm < 400000){
		cout << "UV" << "\n";
	}else if (400000 <= pm && pm < 700000){
		cout << "VIS" << "\n";
	}else if (700000 <= pm && pm < 1000000000){
		cout << "IR" << "\n";
	}else{
		cout << "R" << "\n";
	}
	
	return 0;
}
