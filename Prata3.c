#include "stdafx.h"
#include <stdio.h>

int main(void) {
	int x = 1, y = 0, z = 0, n = 0;
	while (x != 0) {
		scanf_s("%i", &x);
		n++;
		if (x % 2 == 0) {
			y++;
		}
		else {
			z++;
		}
	}
	printf("Общее количество цифр: %i\n", n);
	printf("Количество нечетных цифр: %i\n", z);
	printf("Количество четных цифр: %i", y);
	return 0;
}

