#include <iostream>
using namespace std;

int main(void){
	int month;
	while(cin >> month){ //�S�����A��J�X���N�n�� 
		switch (month){
  			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
   	   	 		cout << "days = 31\n";   
    		
    	
  			case 4: case 6: case 9: case 11:
   	  	  		cout << "days = 30\n"; 
    			break;
    	
  			case 2:
   				cout << "days = 28 or 29\n"; 
   			 	break;
   		 	
  	  		default:
    			cout << "��J���~!\n";
		}
	}
	return 0;
}
