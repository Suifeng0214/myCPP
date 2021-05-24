#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int yy ,mm, dd;
	string a, b;
	cin >> yy >> mm >> dd >> a >> b;
	cout << yy+1997 << "/" << mm << "/" << dd << "\n"
		 << "Doodle Name: " << a << "\n"
		 << "Reviews: " << b << "\n";
	return 0;
}
