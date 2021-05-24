#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int hh1, mm1, ss1,
		hh2, mm2, ss2,
		nh, nm, ns,
		temp;
		
	char tmp;
	cin >> hh1 >> tmp >> mm1 >> tmp >> ss1;
	cin >> hh2 >> tmp >> mm2 >> tmp >> ss2;
	if (hh2 < hh1){
		hh2+=24;
	}
	temp = hh1*3600 + mm1*60  + ss1;
	temp = abs((hh2*3600 + mm2*60  + ss2) - temp);
	
	nh = temp / 3600;
	temp %= 3600;
	nm = temp / 60;
	temp %= 60;
	ns = temp;
	if (nh < 10){
		if(nm < 10 && ns >=10){
			cout << 0 << nh << ":0" << nm << ":" << ns;
			return 0;
		}
		if (nm >= 10 && ns < 10){
			cout << 0 << nh << ":" << nm << ":0" << ns;
			return 0;
		}if (nm < 10 && ns < 10){
			cout << 0 << nh << ":0" << nm << ":0" << ns;
			return 0;
		}
		cout << 0 << nh << ":" << nm << ":" << ns;
		return 0;
	}else{
		if(nm < 10 && ns >=10){
			cout << nh << ":0" << nm << ":" << ns;
			return 0;
		}
		if (nm >= 10 && ns < 10){
			cout << nh << ":" << nm << ":0" << ns;
			return 0;
		}if (nm < 10 && ns < 10){
			cout << nh << ":0" << nm << ":0" << ns;
			return 0;
		}
		cout << nh << ":" << nm << ":" << ns;
		return 0;
	}
	cout << nh << ":" << nm << ":" << ns;
    return 0;
}

