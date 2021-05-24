#include <iostream>
using namespace std;

int main(void)
{
	int grade, balls;
	cin >> grade >> balls;
	switch (grade){
		case 1:
			if (balls >= 8){
				cout << "PASS!" << endl;
			}else{
				cout << "FAIL! You see see you!" << endl;
			}
			break;
			
		case 2:
			if (balls >= 9){
				cout << "PASS!" << endl;
			}else{
				cout << "FAIL! You see see you!" << endl;
			}
			break;
			
		case 3:
			if (balls == 10){
				cout << "PASS!" << endl;
			}else{
				cout << "FAIL! You see see you!" << endl;
			}
			break;
	}
}
