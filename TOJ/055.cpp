#include <bits/stdc++.h>
using namespace std;
vector <int> CDs;
vector <int> searchArr;
int sum;
int calculate(int a);
int main(void)
{
	int i;
	CDs.reserve(1000010);
	searchArr.reserve(1000010);
	int downloadAmount;
	cin >> sum;
	for (i = 0; i < sum; i++){
		cin >> CDs[i];
	}
	cin >> downloadAmount;
	for (i = 0; i < downloadAmount; i++){
		cin >> searchArr[i];
	}
	
	sort(CDs.begin(), CDs.begin()+sum);
	
	for (i = 0; i < downloadAmount; i++){
		cout << calculate(searchArr[i]) << "\n";
	}	
	return 0;
}

int calculate(int a)
{
	auto low = lower_bound(CDs.begin(), CDs.begin()+sum, a);
	auto upper = upper_bound(CDs.begin(), CDs.begin()+sum, a);
	return  upper-low;
}







