#include <stdio.h>

int main(void) {
	int n, y;
	y = 0;
	
	for( n=1 ; n<=200; n=n+1 )
	y = y + n;
	printf("The 200th y is %-i\n ", y);
	return 0;
}