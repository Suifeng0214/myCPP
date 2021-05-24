#include <bits/stdc++.h>
using namespace std;
vector <int> listt;
long long asks[10010];
int main(void)
{
	listt.reserve(1000010);
	long long n ,i, ask, times, loww, upp;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> listt[i];
	}
	sort(listt.begin(), listt.begin()+n);
	cin >> times;
	while(times--){
		cin >> ask;
		auto low = lower_bound(listt.begin(), listt.begin() + n, ask);
		auto up = upper_bound(listt.begin(), listt.begin() + n, ask);
		loww = low - listt.begin();
		upp = up - listt.begin();
		if(listt[loww] == ask){
			cout << ask << "\n";
		}else
			if((loww - 1) < 0){
				cout << "no " << listt[upp] << "\n";
			}else if(upp == n){
				cout << listt[loww-1] << " no" << "\n";
			}else{
				cout << listt[loww-1] << " ";
				cout << listt[upp] << "\n";
			}
	}
}
