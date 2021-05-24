#include <iostream>
using namespace std;

int main()
{
	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;
		int last, now;
		bool flag = 1;
		cin >> last;
		for (int i = 0; i < n-1; i++){
			cin >> now;
			if (now != last){
				flag = 0;
			}
			last = now;
		}
		if (flag){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
	}
}
