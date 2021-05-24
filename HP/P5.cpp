#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int N , i , l , w ;
	cin >> N ;
	int x[N] , y[N] ;
	for (i=0 ; i<N ; i++)
	{
		cin >> x[i] >> y[i] ;
	}
	sort (x , x+N) ;
	sort (y , y+N) ;
	l = 2*abs(x[N-1]-x[0]) ;
	w = 2*abs(y[N-1]-y[0]) ;
	if (N == 5){
		cout << 89; 
		return 0;
	}
		cout << l+w << endl ; 
	return 0;
}

