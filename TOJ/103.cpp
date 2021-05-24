#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(void)
{
	string category[2];
	int sweet[2];
	
	cin >> category[0] >> sweet[0];
	cin >> category[1] >> sweet[1];
	
	if (category[0] == category[1] && sweet[0] == sweet[1]){
		cout << "GOOD" << endl;	
	}else if (category[0] == category[1] || sweet[0] == sweet[1]){
		cout << "=~=" << endl;
	}else{
		cout << "OTZ" << endl;
	}
}
