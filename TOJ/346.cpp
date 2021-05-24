#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	long long int a[91] = {0,1};
	short i, times;
	for (i = 2; i < 91; i++){
		a[i] = a[i-2] - a[i-1];
	}

	cin >> times;
	int input[times];
	for (i = 0; i < times; i++){
		cin >> input[i];
	}
	for (i = 0; i < times; i++){
		printf("G(%lld) = %lld\n", input[i], a[input[i]]);
	}
	return 0;
}
