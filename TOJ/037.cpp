#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    string input, output;
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(getline(cin, input)){
  		stringstream ss;
   	 	ss << input;
    	sum = 0;
  		while(ss >> output){
  			sum++;	
		}

  		cout<< sum <<endl;    
	}
}
