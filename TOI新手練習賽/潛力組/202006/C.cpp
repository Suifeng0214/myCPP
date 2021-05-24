#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string c , ans ;
    int a , b , temp=0 ;
    cin >> a >> b >> c ;
    if(a!=10)
    {
        for (int i=0 ; i<c.size() ; ++i)
        {
            temp *= a ;
            temp += (c[i]-'0') ;
        }
    }
    else temp = stoi(c) ;
    while(temp/b>=1){
        ans += char('0' + temp%b) ;
        temp /= b ;
    }
    ans += char('0' + temp%b) ;
    reverse(ans.begin() , ans.end()) ;
    cout << ans << endl ;
    return 0;
}
