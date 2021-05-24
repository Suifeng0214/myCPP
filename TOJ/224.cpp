#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	long long int a, b, i, sum= 1;
	cin >> a >> b;
	if (a < b){
		for (i = a; i <= b; i++){
		/*
		if (i == b){
			printf("%d=", i);
		}else{
			printf("%d*", i);
		}
		*/
			sum *= i;
		}
	}else if (a > b){
		for (i = a; i >= b; i--){
			sum *= i;
		}
	}
	cout << sum << endl;
	return 0;
}
