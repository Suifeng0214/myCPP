#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int num, flag;
    int a, b ,big, small, reminder;
    int gcd, lcm;
    int bot[100], top[100], x = 0;
    int i, j;

    cout << "Please input(a, b) " << endl;
    cin >> a;
    cin >> b;

    big = (a >= b)? a : b;
    small = (a == big)? b : a;

    while (big % small != 0){
        reminder = big % small;
        big = small;
        small = reminder;
    }
    gcd = small;
    lcm = gcd *(a/gcd) * (b/gcd);
//=-=-=-=--=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
if(gcd == 1){
    cout << "a = " << a <<
            "  " << "b = " << b << endl
                 << "gcd = " << gcd << endl
                 << "lcm = " << lcm;

}else{
    for (num = 2;; num++){
        flag = 0;
        for (i = 2; i <= sqrt(num); i++){
            if (num % i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            if(gcd % num == 0){
                bot[num-2] = num;
            }
            if(gcd % num == 0){
                while(gcd % num == 0){
                    gcd /= num;
                    x++;
                }
                top[num-2] = x;
                x = 0;
            }
        }
        if(gcd == 1){
            cout << "a = " << a <<
            "  " << "b = " << b << endl
                 << "gcd = " << small << " = ";
            for (int k = 0; k < num-1; k++){
                cout << bot[k] << "^" << top[k];
                while(k < num-2){
                    cout << " * ";
                    break;
                }
            }
            cout << endl << "lcm = " << lcm;
            break;
        }
    }
}
}
