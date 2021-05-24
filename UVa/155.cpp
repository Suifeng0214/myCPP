//Author: Suifeng0214
#include <bits/stdc++.h>
#define int long long
using namespace std;
int ans=0;
void count(int x, int y, int midx, int midy, int k){
	if (midx-k <= x && x <= midx+k &&
		midy-k <= y && y <= midy+k) ans++;
	if (k==1)return;
	count(x, y, midx-k, midy-k, k/2);
	count(x, y, midx-k, midy+k, k/2);
	count(x, y, midx+k, midy-k, k/2);
	count(x, y, midx+k, midy+k, k/2);
}
signed main()
{
	int k, x, y;
	while(cin >> k >> x >> y && k && x && y){
		cout << setw(3);
		count(x, y, 1024, 1024, k);
		cout << ans << "\n";
		ans=0;
	}

} 
