#include <bits/stdc++.h>
using namespace std;
#define int long long
//vector <int> a;
//set <int> st;
//map <int, int> mp;
//priority_queue <int> pq_l; //largest  
//priority_queue <int, vector<int>, greater<int>> pq_s; //s
void init();
void solve();
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	for (int i = 1; ;i++){
		if (i % a1 == b1 && (i % a2 == b2) && (i % a3 == b3)){
			cout << i << "\n";
			break;
		}
	}
} 

void init()
{
	
}

void solve()
{

}
 
