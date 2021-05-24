#include <bits/stdc++.h>
using namespace std;
#define int long long
int box[100010];
vector <int> ans;
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, n, s, sum=0, max=-1, tag=-1, check=0, first=-1,second=-2, ans;
	cin >> q;
	while(q--){
		max = -1;
		sum = 0;
		tag=-1;
		first=-1; second=-2; check=0;
		cin >> n >> s;
		for (int i = 0; i < n; i++){
			cin >> box[i];
		}
		for (int i = 0; i < n; i++){
			sum += box[i];
			tag = (tag > box[i])? tag : box[i];
			if (sum >= s && first == -1){
				first = i;
				sum -= box[i];
				check = 1;
			}else if (sum >= s){
				second = i;
				break;
			}
		}	
		if (first != -1)
			for (int i = 0; i < second; i++){
				max = (max > box[i])? max : box[i];
			}
		for (int i = 0; i < n; i++){
			if (box[i] == tag)
			ans = i;
		}
		for (int i = 0; i < n; i++){
			if (box[i] == max){
				cout << i+1 << "\n";
				break;
			}else if (check==0){
				cout << 0 << "\n";
				break;
			}else if (second == -2){
				cout << ans+1 << "\n";
				break;
			}
		}
	}
    return 0;
}


