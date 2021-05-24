#include <iostream>
using namespace std;

int main(void)
{
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++){
            if (i * j < 10){
                cout << " " << i*j << " ";
                 }else{
                    cout << i*j << " ";

            }
        }
        cout << endl;
    }
}
