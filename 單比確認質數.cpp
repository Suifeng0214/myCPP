#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int num, flag = 0;
    cin >> num;
    
    for (int i = 2; i <= sqrt(num); i++){
    	if (num % i == 0){
    		flag = 1;
    		break;
		}	
	}
	if (flag == 0){
		cout << "���";
	}else{
		cout << "�D���";
	} 
}
