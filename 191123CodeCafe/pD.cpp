#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T,times, tmp, check=1, count;
	cin >> T;
	while(T--){
		check = 1;
		a.clear();
		cin >> times;
		a.reserve(times);
		while(times--){
			cin >> tmp;
			a.push_back(tmp);
		}
		
		while(check){
			count = 100000;
			for (int i = 0; i < a.size(); i++){
				if (a[i] == a[i+1]){
					count++;
					a.erase(a.begin()+i, a.begin()+i+2);
					i--;
				}
			}
			if(count == 100000){
					check = 0;
					cout << a.size() << "\n";
					break;
			}
		}
	}
    return 0;
}

