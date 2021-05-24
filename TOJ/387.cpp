#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(void)
{
	double minLimit, Width, Dimensions;
	int count=0;
	cin >> minLimit >> Width;
	Dimensions = pow(Width, 2);
	
	while(Dimensions > minLimit){
		Dimensions /= 2;
		count ++;
	}
	cout << count << endl;
	return 0;
}
