#include <iostream>
#include <algorithm>

using namespace std;
int main(void)
{
    int lines, i, j,
        Max = 0, Min = 0;
	cin >> lines;
	int Inputs[lines][2];
	for (i = 0; i < lines; i++){
		for (j = 0; i < 2; j++){
			cin >> Inputs[i][j];
		}
	}
	//Min = min()
	for (i = 0; i < lines; i++){
		for (j = 0; i < 2; j++){
            Inputs[i][j] -= Min;
		}
	}
	int Output[Max - Min + 1];


	Max = Inputs.Cast<int>().Max();
	cout << Max;
	//int line[max-min + 1]
}
