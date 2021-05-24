#include <iostream>
using namespace std;

int main(void)
{
	long long int num[2];
	char a[1];
	cin >> num[0] >> a[0] >> num[1];
	if (a[0] == '*'){
		cout << num[0] << " " << a[0] << " " << num[1]
		 << " = " << num[0] * num[1] << endl;
	}
	
	if (a[0] == '/'){
		if (num[1] == 0){
			cout << "ERROR" << endl;
		}else{
		cout << num[0] << " " << a[0] << " " << num[1]
		 << " = " << num[0] / num[1]<< " ... " << num[0] % num[1] << endl;
		}
	}
	
	if (a[0] == '+'){
		cout << num[0] << " " << a[0] << " " << num[1]
		 << " = " << num[0] + num[1] << endl;
	
	}
	
	if (a[0] == '-'){
		cout << num[0] << " " << a[0] << " " << num[1]
		 << " = " << num[0] - num[1] << endl;
	}

}
