#include <bits/stdc++.h>
using namespace std;
#define int long long
int myXOR(int x, int y);
signed main(){
	ios::sync_with_stdio(0);
	//cin.tie(0);
	int a, b, tmpa, tmpb, aa=0, bb=0;
	cin >> a >> b;
	if (a == 1){
		cout << b << "\n";
		for (int i = 0; i < b; i++){
			if (i != b-1)
				cout << 1 << " ";
			else
				cout << 1;
		}
		return 0;
	}
	if (a == 0){
		if (b == 0){
			cout << 0;
			return 0;
		}else{
			if (b&1){
				cout << -1;
				return 0;
			}else{
				cout << b/2 << b/2;
			}
		}
	} 
	tmpa = a; tmpb = b;
	while(tmpa >= 2){
		tmpa/=2;
		aa++;
	}
	while(tmpb >= 2){
		tmpb/=2;
		bb++;
	}
	if (aa > bb){
		cout << -1;
		return 0;
	}
	//////////////
	//normal sol//
	//////////////
	int i, j;
	if (b&1){
		i=b/2;
		j=b/2+1;
	}else{
		i = j = b/2;
		i++; j--;
	}
	bool flag = 0;
	for (int k = 0; k < min((int)1e17, b/2-1); k++){
		if (myXOR(i, j) == a){
			flag = 1;
			break;
		}else{
			i++;
			j--;
		}
	}
	if (flag){
		cout << 2 << "\n";
		cout << i << " " << j;
	}else{
		cout << -1;
	}
}

int myXOR(int x, int y) 
{ 
    int res = 0; // Initialize result 
      
    // Assuming 32-bit Integer  
    for (int i = 31; i >= 0; i--)                      
    { 
       // Find current bits in x and y 
       bool b1 = x & (1 << i); 
       bool b2 = y & (1 << i); 
         
        // If both are 1 then 0 else xor is same as OR 
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);           
  
        // Update result 
        res <<= 1; 
        res |= xoredBit; 
    } 
    return res; 
} 
