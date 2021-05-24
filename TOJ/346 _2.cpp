#include <iostream>
#include <stdio.h>
using namespace std;
long long int G(long long int n);
long long int temp[92];
bool tempBool[92];
int main(void)
{
	long long int a[91] = {0,1};
	short i, times;

	cin >> times;
	int input[times];
	for (i = 0; i < times; i++){
		cin >> input[i];
	}
	for (i = 0; i < times; i++){
		
		printf("G(%lld) = %lld\n", input[i], G(input[i]));
	}
	return 0;
}

long long int G(long long int n)
{
	if (tempBool[n] == 1){
		return temp[n];
	}else{
		if (n==0){
			return 0;
		}else if (n==1){
			return 1;
		}else{
			tempBool[n] = 1;
			temp[n] =  G(n-2) - G(n-1);
			return temp[n];
		}
	}
	
}
