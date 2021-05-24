#include <iostream>
using namespace std;

int main(void)
{
    int x, y;
    cin >> x >> y;
    for (int i = 2 ;;i = i*2 +1){
    	if (i % x == 0){
    		if(i % y == 0){
    			cout << "right\n"; 
    			break;
			}else{
				cout << "left\n";
				break;
			}
		}
	}
    return 0;
}

