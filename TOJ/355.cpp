#include <iostream>
#include <vector>
using namespace std;
vector <long long> ability;
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K, big = -1, sec = -1;
	cin >> N >> K;
	ability.reserve(K);
	while(cin >> K){
		big = (big > K) ? big : K;
		ability.push_back(K);
	}
	for (int i = 0; i < ability.size(); i++){
		if (ability[i] != big)
			sec = (sec > ability[i]) ? sec : ability[i]; 
	}
	cout << sec << "\n";
}

