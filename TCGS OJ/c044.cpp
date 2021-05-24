#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(void)
{
	double A, B, M;
	int N;
	cin >> A >> B >> N;
	M = A/B;
	for (int i = 0; i < N-1; i++){
		M*=10;
	}
		
	M = floor(M);
	for (int i = 0; i < N-1; i++){
		M/=10;
	}
	cout << M ;
	return 0;
}

