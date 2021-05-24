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
		cout << "質數";
	}else{
		cout << "非質數";
	} 
}
