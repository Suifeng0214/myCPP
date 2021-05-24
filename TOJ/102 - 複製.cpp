#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	double num[2];
	double x;
	char a;
	cin >> num[0] >> a >> num[1];

	if (a == '+'){
		x = num[0] + num[1];
		printf("%.4lf + %.4lf = %.4lf\n", num[0], num[1], x);
	}else if (a == '-'){
		x = num[0] - num[1];
		printf("%.4lf - %.4lf = %.4lf\n", num[0], num[1], x);
	}else if (a == '*'){
		x = num[0] * num[1];
		printf("%.4lf * %.4lf = %.4lf\n", num[0], num[1], x);
	}else if (a == '/'){
		if (num[1] == 0){
			cout << "ERROR" << endl;
		}else{
			x = num[0] / num[1];
            printf("%.4lf / %.4lf = %.4lf\n", num[0], num[1], x);
		}
	}
}
