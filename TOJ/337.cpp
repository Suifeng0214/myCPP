#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
	int n, m;
	scanf("%d%d",&n, &m);
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= n; j++){
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}

	
	return 0;
}
