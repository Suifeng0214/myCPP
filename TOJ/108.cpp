#include <iostream>
using namespace std;

int main(void)
{
    int origin, times, remainder;
    cin >> origin >> times >> remainder;
    while(times--){
    	int a, b;
    	cin >> a >> b;
    	origin += a*b;
	}
	cout << (origin - remainder) / 4 << "\n";
    return 0;
}

