#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int changVal, i, temp;
	string input;
	cin >> changVal >> input;
	for (i = 0; i < input.size(); i++){
		temp = input[i] - changVal;
		if (temp < 65){
			temp = 91 + (temp-65);
		}
		cout << (char)temp;
	}
	cout << endl;

	/*int i;
	char c;
	for (i = 0; i < 256; i++){	
		printf("ASCII_%d = %c\n", i, (char)i);
	}*/
	return 0;
}

