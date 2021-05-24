#include<bits/stdc++.h>
using namespace std;
void A(short n);
void B(short n);
void C(short n);
void D(short n);
void E(short n);
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	short N, layer;
	char category;
	cin >> N;
	while (N--){
		cin >> category >> layer;
   		if (category == 'A')
   			A(layer);
		if (category == 'B')
			B(layer);
		if (category == 'C')
			C(layer);
		if (category == 'D')
			D(layer);
		if (category == 'E')
			E(layer);
		if (category == 'F')
			A(layer*2);
		if (category == 'G')
			A(layer*3);
		if (category == 'H')
			A(layer*7);
		if (category == 'I')
   			A(layer*4-1);
	}
	return 0;
}

void A(short n)
{
   for (short i = 1; i <= n; i++){
		for (short j = n-i; j > 0; j--){
			cout << " ";
		}
		for (short j = 0; j < 2*i-1; j++){
			cout << "*";
		}
		cout << "\n";
   }
   cout << "\n";
}

void B(short n)
{
   for (short i = 1; i <= n; i++){
		for (short j = n-i; j > 0; j--){
			cout << " ";
		}
		for (short j = 0; j < 2*i-1; j++){
			cout << "*";
		}
		cout << "\n";
   }
   for (short i = 1; i <= n; i++){
		for (short j = n-i; j > 0; j--){
			cout << " ";
		}
		for (short j = 0; j < 2*i-1; j++){
			cout << "*";
		}
		cout << "\n";
   }
   cout << "\n";
}

void C(short n)
{
	for (short k = 1; k <= n; k++){
   		for (short i = 1; i <= k; i++){
			for (short j = n-i; j > 0; j--){
				cout << " ";
			}
			for (short j = 0; j < 2*i-1; j++){
				cout << "*";
			}
			cout << "\n";
   		}
	}
	cout << "\n";
}

void D(short n)
{
   for (short i = 1; i <= n*10; i++){
		for (short j = 10*n-i; j > 0; j--){
			cout << " ";
		}
		for (short j = 0; j < 2*i-1; j++){
			cout << "*";
		}
		cout << "\n";
   }
   cout << "\n";
}

void E(short n)
{
	for (short i = 1; i <= n; i++){
		for (short j = n-i+2; j > 0; j--){
			cout << " ";
		}
		for (short j = 0; j < 2*i-1; j++){
			cout << "*";
		}
		cout << "\n";
	}
	for (short j = 0; j < 2*n+3; j++){
		cout << "#";
	}
	cout << "\n";
	cout << "\n";
}

