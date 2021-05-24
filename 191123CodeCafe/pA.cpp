#include <bits/stdc++.h>
using namespace std;
bool q[1000010];
vector <int> a;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a, b, tmp, times,count=0;
	bool check = 0;
	cin >> a >> b;
	times = b ;
	if(a > b){
		for(long long i = 0; i < b; i++){
			cout << "NO\n";
		}
		return 0;
	}
	
	while(times--){
		cin >> tmp;
		q[tmp] = 1;
		count++;
		if (check == 0){
			if(count >= a){
				for(int i = 1; i <= a; i++){
					if (q[i] == 0){
						check = 0;
						break;
					}
					if (i == a){
						check = 1;
						cout << "YES\n";
						
					}
				}
			}
			if (check == 0)
				cout << "NO\n";
		}else{
			cout << "YES\n";
		}
	}
    return 0;
}

