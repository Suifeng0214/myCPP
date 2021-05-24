#include <bits/stdc++.h>
using namespace std;
vector <long long> sum(200010);
vector <int> nums;
int main(void)
{
	//pre-work
	ios::sync_with_stdio(0);
	cin.tie(0); 
	int amounts, ask, a, b, tmp;
	cin >> amounts;
	nums.reserve(amounts);
	for (int i = 0; i < amounts; i++){
		cin >> nums[i];
	}
	sum[0] = nums[0];
	for (int i = 1; i < amounts; i++){
		sum[i] += sum[i-1] + nums[i];
	}
	
	//ask
	cin >> ask;
	while(cin >> a >> b){
		if(a > b){
			tmp = a;
			a = b;
			b = tmp;
		}
		if (a == 1){
			cout << sum[b-1] << "\n";
		}else{
			cout << sum[b-1] - sum[a-2] << "\n";
		}
	}
}
