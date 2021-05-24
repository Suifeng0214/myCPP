#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
//12:15
vector <pair<int, int>> arr;
vector <pair<int, int>> ans;
vector <pair<int, int>> tmp;
double tmp_sum=0, ans_sum=0x3f3f3f3f;
bitset <10> used;
int n;	
void dfs(int k, int x){
	tmp.emplace_back(arr[x]);
	if (k==n-1){
		for (int i = 1; i < n; i++){
			double ouo = sqrt(pow(fabs(tmp[i].F - tmp[i-1].F), 2) + 
				   pow(fabs(tmp[i].S - tmp[i-1].S), 2));
			tmp_sum += ouo;
		}
		if (tmp_sum < ans_sum){
			ans = tmp;	
			ans_sum = tmp_sum;
		}
		tmp.clear();
		return;
	}
	for (int i = 0; i < n; i++){
		if (used[i]) continue;
		used[i] = 1;
		dfs(k+1, i);
		used[i] = 0;
	}
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	//freopen("out.txt", "w", stdout);
	bool flag = 0;
	int t=0;
	while(1){
		t++;
		used.reset();
		arr.clear();
	//	tmp.clear();
		ans.clear();
		cin >> n;
		if (n==0) break;
		for (int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			arr.emplace_back(a, b);
		}
		for (int i = 0; i < n; i++){
			used[i] = 1;
			dfs(0, i);
			used[i] = 0;
		}
		cout << "*********************************"
			 << "*************************\n"
			 << "Network #" << t << "\n";
		cout << fixed << setprecision(2);
		for (int i = 1; i < n; i++){
			double ouo = sqrt(pow(fabs(ans[i].F - ans[i-1].F), 2) + 
						 pow(fabs(ans[i].S - ans[i-1].S), 2));
			cout << "Cable requirement to connect ("
				 << ans[i-1].F << "," << ans[i-1].S << ") to ("
				 << ans[i].F << "," << ans[i].S << ") is " << ouo
				 << " feet.\n";
		}

		cout << "Number of feet of cable required is " << ans_sum
			 << ".\n";
	}
    return 0;
}
