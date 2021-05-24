#include <bits/stdc++.h>
using namespace std;
vector <double> nums;
int main(void)
{
	nums.reserve(100010);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int times;
	double tmp;
	cin >> times;
	while(times--){
		cin >> tmp;
		nums.push_back(tmp);
		sort(nums.begin(), nums.end());
		if (nums.size() % 2 == 1){
			cout << fixed << setprecision(6) << nums[nums.size()/2] << '\n';
		}else{
			cout << fixed << setprecision(6) << (nums[nums.size()/2] + nums[nums.size()/2 - 1] ) / 2 << "\n";
		}
	}
	return 0;
}
