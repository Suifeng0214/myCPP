#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mid ((l+r)/2)
signed main()
{
	int l = 1, r = 1000;
	int now = mid;
	cout << now << "\n" << flush;
	string s;
	while(cin >> s){
		if (s=="lower"){
			r=mid-1;
			cout << mid << "\n" << flush;
		}else if (s == "higher"){
			l=mid+1;
			cout << mid << "\n" << flush;
		}else{
//			cout << r << "\n";
			exit(0);
		}
	}
}
