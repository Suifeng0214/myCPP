#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int layers;
	
	cin >> layers;
	for (int i = 0; i < layers; i++){
		for (int j = i; j < layers-1; j++){
			cout << " ";
		}
		for (int j = 0; j <= 2*i; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
