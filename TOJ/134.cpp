#include <bits/stdc++.h> 
using namespace std;
#define int long long
vector <string> face;
void bigplus(int n);
signed main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	face.emplace_back("0");
	face.emplace_back("1");
	for (int i = 2; i < 501; i++){
		bigplus(i);
	}
	/*for (int i = 0; i < 100; i++){
		cout << face[i] << '\n';
	}*/
	int n;
	cin >> n;
	cout << face[n] << "\n";
}

void bigplus(int n)
{
	string a, b, ans="";
	a = face[n-1];
	b = face[n-2];
	int p = 0,
		i = a.size()-1, 
		j = b.size()-1;
		
	bool first=0;
	while (i>=0 && j>=0){
		if (!first){
		
		}
		ans += (((a[i] - '0') + (b[j] - '0') + p) % 10)+'0';
		p = (((a[i--] - '0') + (b[j--] - '0')+ p )  / 10);
	} 
	
	while(i >= 0){
		ans += (((a[i] - '0') + p) % 10)+'0';
		p = ((a[i--] - '0' + p) / 10);
	}

	while(j >= 0){
		ans += (((b[j] - '0') + p) % 10)+'0';
		p = ((b[j--] - '0' + p) / 10);
	}
		
	if (p > 0){
		ans = ans + (char)(p+'0') ;
	}
	reverse(ans.begin(), ans.end());

	face.emplace_back(ans);
	return;
}

