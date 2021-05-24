
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string a;
	char b;
	int none;
	cin >> none >> a >> b;
	for (int i = 0 ; i < a.size(); i++){
		if (a[i] == 'P' && b == 'L'){
			a[i] = '.';	
			a[i-1] = 'P';
			break;
		}
		if (a[i] == 'P' && b == 'R'){
			a[i] = '.';	
			a[i+1] = 'P';
			break;
		}
	}
	for (int i = 0 ; i < a.size(); i++){
		cout << a[i];
	}
	cout << "\n";
	return 0;
}
