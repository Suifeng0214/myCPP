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
int A[6];
int B[6];
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, c;
	int now=0;
	cin >> a >> b >> c;
	for (int i = 0 ; i< 5; i++){
		cin >> A[i];
	}
	for (int i = 0 ; i< 5; i++){
		cin >> B[i];
	} 
	for (int i = 0; i < 5; i++){
		if (a == A[i]) now += B[i];
		if (b == A[i]) now += B[i];
	}
	bool find = 0;
	for (int i = 0; i < 5; i++){
		if (c == A[i]){
			find = 1;
			now -= B[i];
		}
	}
	if (find == 0){
		now*=2;
	}
	cout << max(now, (int)0) << "\n";
} 

void init()
{
	
}

void solve()
{

}
 
