#include <iostream>
using namespace std;
int main(void)
{
	int n;
	char x;
	cout << "請輸入欲製造層數 : ";
	cin >> n;
	cout << "請輸入要用何字元製造 : ";
	cin >> x;
	for (int i = 1; i <= n; i++){
		for (int j = n-1; j >= i ; j--){
			cout << " " ;
		}
		for (int k = 1; k <= 2*i - 1; k++){
			cout << x;
		}
		cout << endl;
	}
	for (int i = n-1; i >= 0; i--){
		for (int j = n-1; j >= i ; j--){
			cout << " " ;
		}
		for (int k = 1; k <= 2*i - 1; k++){
			cout << x;
		}
		cout << endl;
	}

	//system("pause");
	return 0;
}
