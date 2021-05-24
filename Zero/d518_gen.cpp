#include <bits/stdc++.h>
using namespace std;
#define SagiriMywife ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string s[10]={"aaa", "abca", "aaac", "abcc", "aa", "ouo", "xdd", "aaaa", "txt", "oeis"};
signed main(){
	SagiriMywife
	freopen("gen.txt", "w", stdout);
	srand(clock());
	int n=10;
	while(n--){
		cout << "100\n";
		for (int i = 0; i < 100; i++){
			cout << s[rand()%10] << "\n";
		}
	}
}
