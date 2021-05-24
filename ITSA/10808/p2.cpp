#include <bits/stdc++.h> 
using namespace std;
int	count(int input);
int listt[11];
vector <int> ans;
int main(void)
{
	int x, i, j, input, temp;
	ans.reserve(11);
	cin >> x;
	for (i = 0; i < x; i++){
		cin >> listt[i];
	}
	for (i = 0; i < x-1; i++){
		if (count(listt[i]) > count(listt[i+1])){
				temp = listt[i];
				listt[i] = listt[i+1];
				listt[i+1] = temp;
		}else if (count(listt[i]) == count(listt[i+1])){
			if (listt[i] > listt[i+1]){
				temp = listt[i];
				listt[i] = listt[i+1];
				listt[i+1] = temp;
			}
		}else{
			continue;
		}
		
	}
	for (i = 0; i < x; i++){
		cout << listt[i] << " ";
	}
}

int	count(int input)
{
	int x = 0;
	while(input != 0){
		x += input % 10;
		input /= 10;
	}
	return x;
}




