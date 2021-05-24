#include <bits/stdc++.h>

using namespace std;
			
vector <char> ans;
vector <int> num;
int main()
{
	num.reserve(100);
    string tmpS;
    int times, dot=0;
    cin >> times;
    cin.ignore();
	while(times--){
		dot = 0;
		getline(cin, tmpS);
		for (int i = 0; i < tmpS.size(); i++){
			if ('0' <= tmpS[i] && tmpS[i] <= '9'){
				num.push_back(tmpS[i] - '0');
			}
		}
		for (int i = 0; i < tmpS.size(); i++){
			if ('A' <= tmpS[i] && tmpS[i] <= 'Z'){
				cout << (char) (((tmpS[i] + num[dot]) % 65)%26 + 'A'); 
			} 
			if ('0' <= tmpS[i] && tmpS[i] <= '9'){
				dot++;
			}
		}
		cout << "\n";
		num.clear();
		num.reserve(100);
	}
}
