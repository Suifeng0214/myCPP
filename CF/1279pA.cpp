#include <bits/stdc++.h>
using namespace std;
#define int long long
int box[3];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while(q--){
		int r, g, b,f,s;
		cin >> box[0] >> box[1] >> box[2];
		sort(box, box+3);
		if (box[0] + box[1] < box[2]-1) {
			cout << "No\n";
		}else{
			cout << "Yes\n";
		}
	}
    return 0;
}


