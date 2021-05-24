#include <bits/stdc++.h>
#define int long long
using namespace std;
vector <string> s;
signed main()
{
    int n, k;
    cin >> n >> k;

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string A, B;
    cin >> A >> B;
    int a_lose=0, b_lose=0, a_sum=0, b_sum=0;
    for (int i = 0; i < n; i++){
        //if A win
        if (A[i] == 'R' && B[i] == 'S' || (A[i] == 'S' && B[i] == 'P') || (A[i] == 'P' && B[i] == 'R')){
            a_sum += a;
            //cout << "a win\n";
            b_sum += (++b_lose >= k)? d : c;
            a_lose = 0;
        }else if (A[i] == B[i]){
            //cout << "even\n";
            a_sum += b;
            b_sum += b;
            a_lose = 0;
            b_lose = 0;
        }else{ // B win
            //cout << "b win\n";
            b_sum += a;
            a_sum += (++a_lose >= k)? d : c;
            b_lose = 0;
        }
    }
    cout << a_sum << " " << b_sum;
}
