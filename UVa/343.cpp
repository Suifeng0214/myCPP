#include <bits/stdc++.h>
#define int long long 
using namespace std;
int mx[2];
void find_mx(string tmp, int th){
	for (int i = 0; i < tmp.size(); i++){
		if (isdigit(tmp[i])){
			mx[th] = max((int)tmp[i]-'0', mx[th]);
		}else{
			mx[th] = max((int)tmp[i]-'A'+10, mx[th]);
		}
	}
	mx[th] = (mx[th] < 2)? 1 : mx[th];
}

int ouo(string tmp, int x){
	int ret = 0;
	for (int i = 0; i < tmp.size(); i++){
		ret *= x;
		if (isdigit(tmp[i])){
			ret += (tmp[i]-'0');
		}else{
			ret += (tmp[i]-'A'+10);
		}
	}
	return ret;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	while(cin >> a >> b){
		memset(mx, 0, sizeof(mx));
		find_mx(a, 0);
		find_mx(b, 1);
	//	cout << mx << "%\n";
		bool flag=0;
		for (int i = mx[0]+1; i <= 36; i++){
			int na = ouo(a, i);
			flag= 0;
			for (int j = mx[1]+1; j <= 36; j++){
				int nb = ouo(b, j);
				if (na == nb){
					cout << a <<" (base "<<i<<") = "<<b<<" (base "<<j<<")\n";
					flag = 1;
					break;
				}
			}
			if (flag) break;
		}
		if (!flag){
			cout << a << " is not equal to "<<b<<" in any base 2..36\n";
		}
	}
}
