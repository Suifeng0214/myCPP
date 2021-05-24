#include <iostream>
using namespace std;

int main(void)
{
	int season;
	cin >> season;
	if (3 <= season && season <= 5){
		cout << "Spring!" << endl;
	}else if (6 <= season && season <= 8){
		cout << "Summer!" << endl;
	}else if (9 <= season && season <= 11){
		cout << "Autumn!" << endl;
	}else if (12 == season || (1 <= season  && season <= 2)){
		cout << "Winter!" << endl;
	}	 
}
