//Suifeng0214
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
//vector <int> a;
//set <int> st;
//map <int, int> mp;
int Euler(int n)   //1.直接求歐拉函數的值
{
    int rea=n;
    for(int i=2; i*i<=n; i++)
        if(n%i==0)//第一次找到的必?素因子
        {
            rea=rea-rea/i;
           while(n%i==0){
                n=n/i;//把該素因子全部約掉
            }
        }
    if(n>1)
        rea=rea-rea/n;
    return rea;
}
signed main() 
{ 
	//freopen("out.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	cout << Euler(n) << "\n";
} 


