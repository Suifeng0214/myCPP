#include <bits/stdc++.h>
#define int long long
using namespace std;
vector <int> ans;
void convertAtoB();
int a, b, x, num=0, n=0;
signed main() {
	cin >> a >> b >> x;
	while(x > 0){
		if (x%10 != 0)
			num += pow(a, n) * (x%10);
		n++;
		x /= 10;
	}
	cout << num << "\n";
	convertAtoB();
	for (int i = ans.size()-1; i >=0; i--){
		cout << ans[i];
	}
	
	cout << "\n";
}

void convertAtoB()
{
	while(num / b >= 1){
		ans.push_back(num%b);
		num /= b;
	}
	ans.push_back(num%b);
}

