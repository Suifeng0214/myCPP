#include <bits/stdc++.h> 
using namespace std;
#define ll long long
ll int count(ll int input);
ll int listt[11];
ll int listt2[11];
ll int temp[11];
vector <ll int> ans;
int main(void)
{
	ll int x, i, j, input;
	ans.reserve(11);
	cin >> x;
	for (i = 0; i < x; i++){
		cin >> listt[i];
	}
	sort(listt, listt+x);
	for (i = 0; i < x; i++){
		listt2[i] = count(listt[i]);
	}
	
	for (i = 0; i < x; i++){
		temp[i] = listt2[i];
	}
	sort(temp, temp+x);
	
	for (i = 0; i < x; i++){
		for (j = 0; j < x; j++){
			if (temp[i] == listt2[j]){
				ans.push_back(listt[j]);
				listt2[j] = 0;
				break;
			}
		}
	}
	
	for (i = 0; i < x; i++){
		if (i == x-1){
			cout << ans[i] << "\n";
		}else{
			cout << ans[i] << " ";
		}
	}
}

ll int count(ll int input)
{
	int x = 0;
	while(input != 0){
		x += input % 10;
		input /= 10;
	}
	return x;
}




