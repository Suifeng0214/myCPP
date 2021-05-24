#include <bits/stdc++.h>

using namespace std;
			
vector <int> num;
int main()
{
	stringstream ss;
	num.reserve(100);
    string tmpS;
    int times, dot=0, eg;
    cin >> times;
    cin.ignore();
	while(times--){
		dot = 0;
		getline(cin, tmpS);
		ss << tmpS;
		ss >> eg;
		for (int i = 0; i < tmpS.size(); i++){
			if ('0' <= tmpS[i] && tmpS[i] <= '9'){
				num.push_back(tmpS[i] - '0');
			}
		}
		for (int i = 0; i < tmpS.size(); i++){
			if ('A' <= tmpS[i] && tmpS[i] <= 'Z'){
				if (dot < num.size()){
					cout << (char) (((tmpS[i] + num[dot]) % 65) %26 + 'A'); 
				}else{
					cout << (char) (((tmpS[i]) % 65)%26 + 'A'); 
				}
			} 
			if ('0' <= tmpS[i] && tmpS[i] <= '9'){
				dot++;
			}
		}
		cout << eg; 
		cout << "\n";
		num.clear();
		num.reserve(100);
	}
}
