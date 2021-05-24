#include <bits/stdc++.h>

using namespace std;

int main()
{
	int times, count=1, max;
	char tmp;
	string a, b;
	cin >> times;
	while(times--){
		max = 1;
		count = 1;
		cin >> a;
		cin.ignore();
		getline(cin, b);
		tmp = b[0];
		for (int i = 2; i < b.size(); i++){
			if ('0' <= b[i] && b[i] <= '9'){
				if (b[i] == b[i-2]){
					count++;
				}else{
					max = (max > count)? max : count; 
					count = 1;
					tmp = b[i];
				}
			}
			if (i == b.size()-1){
				max = (max > count)? max : count;
			}
		}
		cout << max << "\n";
	}
}
