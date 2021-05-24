#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
vector <int> book;
int main()
{
	freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
	string a, b;
	bool fk=0;
	while(getline(cin, a)){
		if (fk)
			cout << "\n";
		fk=1;
		getline(cin, b);
//		cout << a << "\n" << b << "\n";
		stringstream ss(a), ss2(b);
		char x, y;
		vector <pair<char, char> > chk;
		while(ss2 >> x >> y){
			chk.emplace_back(x, y);	
		}
		char tmp;
		vector <char> arr;
		while(ss >> tmp){
			arr.emplace_back(tmp);
//			cout << tmp <<"@\n";
		}
		sort(arr.begin(),arr.end());
		do{
			bool p=1;
			for (int i = 0; i < chk.size(); i++){
				char A=chk[i].F, B=chk[i].S;
				int cnta=0, cntb=0;
				for (int j = 0; j < arr.size(); j++){
					if (arr[j] == A){
						cnta++;
						if (cntb != 0){
							p=0;
							break;
						}
					}
					if (arr[j] == B) cntb++;
				}
				if (!p) break;
			}
			if (p){
				for (auto i : arr) cout << i;
				cout << "\n";
			}
		}while(next_permutation(arr.begin(), arr.end()));
	}
    return 0;
}
