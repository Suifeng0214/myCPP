#include <iostream>
using namespace std;

int main(void)
{
	int left, right, digits;
	cin >> digits;
	int digit[digits] = {0};
	for (int i = 0; i < digits; i++){
		cin >> digit[i];
	}
	
	for (int i = 0; i < (digits - 2); i++){
	 	if (digit[i] == digit[i+2]){
	 		left = i; 
			right = (i + 2);
			for(;;){
				if ((digit[left] == digit[right]) &&
				 	((left != 0) ||
					(right != (digits-1)))){
					left--;
					right++;
					if (left == 0 || right == digits-1){
						if (digit[left] != digit[right]){
						//	left++;
						//	right--;
							break;
						}
					}
				}else{
					break;
				}
			}
			for (i = left; i <= right; i++){
				cout << digit[i] << " ";
			}
		 }
	}
}
