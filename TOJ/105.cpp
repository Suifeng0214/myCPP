#include <iostream>
using namespace std;

int main(void)
{
    int sol=2;
    for (int i = 0; i < 25; i++){
        sol = (sol * 2) + 1;
    }
    cout << sol << endl; 
    return 0;
}
