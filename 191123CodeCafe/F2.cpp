#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int times, tmp;
	cin >> times;
	a.reserve(times);
	while(times--){
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	cin >> times;
	while(times--){
		cin >> tmp;
		if(tmp < a[0]){
			cout << "NO\n";
		}else{
			
		}
	}
    return 0;
}

