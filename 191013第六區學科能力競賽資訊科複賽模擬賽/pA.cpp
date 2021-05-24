#include <bits/stdc++.h>
using namespace std;
int nums[1000010];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, i=0, j=0, k=0, times=1;
	long long sum=0;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> nums[i];
	}
	for(i=0, j=1, k=2; ;){
		sum += nums[k] - nums[i];
		sum %= 1000000007;
		if (k != n-1){
			k++;
		}else{
			if (i == n-3){
				break;
			}else if (j == n-2){
				i++;
				j= i+1;
				k= i+2;
			}else if (k == n-1){
				j++;
				k= j+1;
			}
		}
	}
	cout << sum << "\n";
}

 
