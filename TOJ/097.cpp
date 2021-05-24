#include <iostream>
using namespace std;

int main(void)
{
	int statusDoor, statusWindow;
	cin >> statusDoor >> statusWindow;
	if (statusDoor || statusWindow == 1){
		cout << "BUG FREE!" << endl; 
	}else{
		cout << "BARRIER BREACHED!" << endl; 
	}
}
