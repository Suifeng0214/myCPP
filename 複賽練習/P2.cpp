#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;
vector <int> tmp;
bool check[3];
int main()
{
	int i;
	string listt[3];
	string a, b, c;
	cin >> listt[0] >> listt[1] >> listt[2];
//	if (listt[0][0] != listt[1][0] &&
//		listt[1][0] != listt[2][0] &&
//		listt[0][0] != listt[2][0]){
			tmp.push_back(listt[0][0] - '0');
			tmp.push_back(listt[1][0] - '0');
			tmp.push_back(listt[2][0] - '0');
			sort(tmp.begin(), tmp.end());
			i = 2;
			for (; i >= 0; i--){
				if (listt[i][0]-'0' == tmp[2]){
					if (check[tmp[2]] == 1)
						break;
					cout << listt[i];
					check[tmp[2]] = 1;
				}
			}
			check[0] = 0; check[1] = 0; check[2] = 0;
			for (; i >= 0; i--){
				if (listt[i][0]-'0' == tmp[1]){
					if (check[tmp[1]] == 1)
						break;
					cout << listt[i];
					check[tmp[1]] = 1;
				}
			}
			check[0] = 0; check[1] = 0; check[2] = 0;
			for (; i >= 0; i--){
				if (listt[i][0]-'0' == tmp[0]){
					if (check[tmp[0]] == 1)
						break;
					cout << listt[i];
					check[tmp[0]] = 1;
				}
			}
	//	}else
	return 0;
}

