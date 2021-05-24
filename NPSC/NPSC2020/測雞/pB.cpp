#include <iostream>
using namespace std;

int main()
{
	int q;
	cin >> q;
	if (q == 0) cout << "0 0\n";
	else if (q <= 1001)
		cout << q-1 << " " << 1 << "\n";
	else cout << 1000 << " " << q-1000 << "\n";
}
