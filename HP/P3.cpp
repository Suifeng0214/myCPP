#include <bits/stdc++.h> 
using namespace std;
vector <int> prime; 
vector <int> gcdd; 
vector <int> ans; 
int isprime(int n);
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++){
		if (n % i == 0){
			gcdd.push_back(i);
		}
	}
	for (int i = gcdd.size()-1; i >= 0; i--){
		if (isprime(gcdd[i])){
			cout << gcdd[i] << "\n";
		}
	}
	
	return 0;
}

int isprime(int n)
{
	int flag=0;
	for (int i = 2; i*i <= n; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
	
}

