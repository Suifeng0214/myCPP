#include <iostream>
using namespace std;

int main(void)
{
	int num, tempNum, 
		reNum = 1, start = 2;
		
	cin >> num;
	cout << num << " = ";
	
	tempNum = num;
	while (reNum < num){
		while (!(tempNum % start)){
			if (reNum == 1){
				cout << start;
			}else{
				cout << " x " << start;
			}
			tempNum /= start;
			reNum *= start;
		}
		start ++;
	}
	return 0;
} 
