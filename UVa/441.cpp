#include <bits/stdc++.h>
using namespace std;
//11:05
int arr[15];
int ans[15];
int n;	
void dfs(int k, int x){
	ans[k] = arr[x];
	if (k==5){
		for (int i = 0; i < 6; i++){
			cout << ans[i];
			if (i!=5) cout << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = x+1; i < n; i++){
		dfs(k+1, i);
	}
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	freopen("out.txt", "w", stdout);
	bool flag = 0;
	while(1){
		if (flag)
			cout << "\n";
		flag = 1;
		cin >> n;
		if (n==0) break;
		for (int i = 0; i < n; i++){
			cin >> arr[i];		
		}
		for (int i = 0; i < n; i++)
			dfs(0, i);
	}
    return 0;
}
