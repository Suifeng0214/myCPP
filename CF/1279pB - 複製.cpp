#include <bits/stdc++.h>
using namespace std;
#define int long long
int box[100010];
vector <int> ans;
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q, n, s, sum=0, max=-1, tag, boom, f;
	cin >> q;
	while(q--){
		max = -1;
		cin >> n >> s;
		for (int i = 0; i < n; i++){
			cin >> box[i];
		}
		int c = 0;
		tag = 0;
		while(sum < s && c != n){
			sum += box[c];
			f = (f > box[c])? f : box[c];
			if (sum >= s && tag == 0 && c != n){
				sum -= box[c];
				tag = 1;
			}				
			c++;
		}
		if (c == n){
			cout << 0 << "\n";
			continue;
		}
		
		for (int i = 0; i < c; i++){
			max = (max > box[c])? max : box[c];
		}
		for (int i = 0; i < n; i++){
			if (box[i] == max){
				cout << i+1 << "\n";
				break;
			}else if (c == 0 || c == n){
				cout << 0 << "\n";
				break;
			}
		}
	}
    return 0;
}


