#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int x;
    string a;
   while(cin >> x){
    	cin.ignore();
    	getline(cin,a);
    	for (int i = 0; i < x; i++){
       		for (int j = i; j < a.size(); j = j + x){
    			cout << a[j];
       		}
    	}
    	cout << "\n";
	}
}
