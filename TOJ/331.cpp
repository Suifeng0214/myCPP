#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	string F, S;
	long long int f=0, s=0, i;
	cin >> F >> S;
	for (i = 0; i < F.size(); i++){
		if (F[i] != '0'){
			f++;
		}
	}
	for (i = 0; i < S.size(); i++){
		if (S[i] != '0'){
			s++;
		}
	}
	cout << f*s << endl;
	return 0;
}
