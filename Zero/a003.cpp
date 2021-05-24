#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a, b, c;
	while(cin >> a >> b){
		c = (a*2+b)%3;
		if (c == 0){
			cout << "´¶³q" << endl; 
		}else if (c == 1){
			cout << "¦N" << endl; 
		}else{
			cout << "¤j¦N" << endl; 
		} 
	}
}
