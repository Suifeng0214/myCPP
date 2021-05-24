#include <iostream>
using namespace std;

int main(void)
{
	int times, big, small, reminder;
	int i, a, b;

	cin >> times;
	for (i = 0; i < times; i++){
		cin >> a >> b;
		big = (a >= b)? a:b;
		small = (a == big)? b:a;
		
		while (big % small != 0){
			reminder = big % small;
			big = small;
			small = reminder;
		}
		cout << small << endl;
	}
}
