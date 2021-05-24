#include <iostream>
using namespace std;
string board[10], name;
int main(void)
{
	int none, position;
	cin >> none;
	for (int i = 0; i < 10; i++){
		board[i] = "EMPTY";
	}
	while(cin >> name >> position){
		board[position-1] = name;
	}
	for (int i = 0; i < 10; i++){
		cout << board[i] << "\n";
	}
	return 0;
}
