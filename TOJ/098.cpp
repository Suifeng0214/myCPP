#include <iostream>
using namespace std;

int main(void)
{
	long long int LS= 299792458, LM, LH, LD, LW, LY;
	LM = LS * 60;
	LH = LS * 3600;
	LD = LH * 24;
	LW = LD * 7;
	LY = LD * 365;
	cout << "1 Light-second(LS) is 299792458 metres." << endl
		 << "1 Light-minute(LM) is " << LM <<" metres." << endl
		 << "1 Light-hour(LH) is " << LH <<" metres." << endl
		 << "1 Light-day(LD) is " << LD <<" metres." << endl
		 << "1 Light-week(LW) is " << LW <<" metres." << endl
		 << "1 Light-year(LY) is " << LY <<" metres." << endl;
}
