#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times, layer, i, j;
    
    cin >> times;
    while(times--){
    	while(cin >> layer){
    		//TOP
    		for(i = 0; i < layer-1; i++){
    			for(j = i; j < layer-1; j++){
    				cout << ' ';
				}
    			for(j = 0; j <= i; j++){
    				cout << (char)('A'+layer-1-j);
				}
				for(j = i; j > 0; j--){
    				cout << (char)('A'+layer-j);
				}
				cout << "\n";
			}
			for(i = 0; i < layer; i++){
    				cout << (char)('A'+layer-1-i);	
			}
			for(i = 0; i < layer-1; i++){
    				cout << (char)('A'+1+i);	
			}
			cout << "\n";
			//bot
			for(i = layer-1-1; i >= 0; i--){
    			for(j = i; j < layer-1; j++){
    				cout << ' ';
				}
    			for(j = 0; j <= i; j++){
    				cout << (char)('A'+layer-1-j);
				}
				for(j = i; j > 0; j--){
    				cout << (char)('A'+layer-j);
				}
				cout << "\n";
			}
		}
	}
}
