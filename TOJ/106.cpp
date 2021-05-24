#include <iostream>
using namespace std;

int main(void)
{
    int start=2;
    for (int i = start;; i*2+1){
    	if (i % 71 && i % 3){
    		cout << "right" << "\n";
    		break;
		}else if (i % 71 && i % 3 != 0){
			cout << "left" << "\n";
			break;
		}else{
			continue;
		}
	} 
    return 0;
}
