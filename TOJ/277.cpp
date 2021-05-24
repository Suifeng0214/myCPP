#include <bits/stdc++.h>
using namespace std;

long long times, input;
void check(void);
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> times;
	while(times--){
		cin >> input;
		check();
	}
	return 0;
}

void check(void)
{
	stringstream ss;
	string x, stmp;
	ss << input+1;
	ss >> x;
	stmp = x;
	reverse(stmp.begin(), stmp.end());
	if (x == stmp){
		cout << x << "\n";
		ss.clear();
		return;
	}else{
		input++;
		ss.clear();
		check();
	}
}
