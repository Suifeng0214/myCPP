#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long q, count=0, count2=0, tmp, num=1,
		a, b, small, big, minus;
	bool tag = 0;
	cin >> q;
	while(q--){
		count = 0;
		num = 1;
		cin >> a >> b;
		
		if (abs(a-b) == 2){
			count = 3;
		}else{
			count = abs(a-b);
		}
			
		/*
		small = min(a, b);
		big = max(a, b);
		while(!(big == small)){
			if(!tag){
				small += num;
				tag = !tag;
				num++;
				count++; 
				//cout << small << " " << big << "\n";
			}else{
				big += num;
				tag = !tag;
				num++;
				count++;
				//cout << small << " " << big << "\n";
			}
		}*/
		small = min(a, b);
		big = max(a, b);
		minus = big - small;
		int num = 1;
		int count2 = 0;
		while(minus > 0){
			minus -= num;
			num++;
			count2++;
		}
		if(minus == 0){
			if (count < count2)
				cout << count << "\n";
			else 
				cout << count2 << "\n";
		}else{
			cout << count << "\n";
		}
	}
	
    return 0;
}


