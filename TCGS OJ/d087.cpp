#include <iostream>
#include <vector>
#define int long long
using namespace std;
const int N=100;
vector <int> f(N);
vector <int> ::iterator it;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i < f.size(); i++){
		f[i] = f[i-1] + f[i-2];
	//	cout << f[i] << " ";
	}
	int a;
	cin >> a;
	it = lower_bound(f.begin(), f.end(), a);
	int tmp = it-f.begin();
	if (a != f[tmp]){
		cout << a << "\n";
		return 0;
	}
	int ans = tmp;
	bool flag=0;
	while(cin >> a){
		if (f[++tmp] != a){
			cout << a << "\n";
			flag = 1;
			break;
		}
	}
	if (!flag){
		cout << ans << "\n";
	}
}
