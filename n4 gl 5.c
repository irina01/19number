#include "stdafx.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("-— —-\n");
	int n, x, z;
	for (n = 1; n <= 10; ++n) {
		z = 1;

		for (x = 1; x <= n; ++x) {
			z *= x;
		}
		printf(" %i! %-i\n", n, z);
	}

	return 0;
}
