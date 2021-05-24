#include <bits/stdc++.h>
using namespace std;
int is_leap(int year);

int main(void)
{
	int year;
	while(cin >> year){
		if (is_leap(year) == 0){
			cout << "¥­¦~" << endl; 
		}else{
			cout << "¶|¦~" << endl; 
		}
	}
}

int is_leap(int year)
{
	if (year % 400 == 0){
		return 1;
	}else if(year % 4 == 0 && year % 100 != 0){
		return 1;
	}else{
		return 0;
	}
}
