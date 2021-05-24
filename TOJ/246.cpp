#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, times; char d;
    cin >> a >> times >> b;
    a %= b;
    for (int i = 0; i < times; i++){
        cin >> c >> d;
        c %= b;
        a *= c;
        a %= b;
    }
    cout << a << "\n";
}
