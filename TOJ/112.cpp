#include <iostream>
using namespace std;

int main(void)
{
	int nums;
	cin >> nums;
	int output[nums]; 
	
	for (int i = 0; i < nums; i++){
		cin >> output[i];
	}
	for (int i = nums-1; i >= 0; i--){
		cout << output[i] << endl;
	}
	system("pause");
	return 0;
}
