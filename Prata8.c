// Prata8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h> 

int main() {
	int x;
	double sum = 0;
	float N;
	float st;

	float b = 1.5;
	float c1 = 0.15;
	float c2 = 0.2;
	float c3 = 0.05;


	printf("Rate \n 1 - 8.75 \n 2 - 9.33 \n 3 - 10 \n 4 - 11.2 \n 5 - exit \n ");
	scanf_s("%i", &x);

	switch (x) {
	case'1':
		st = 8.75;
		break;
	case'2':
		st = 9.33;
		break;
	case'3':
		st = 10;
		break;
	case'4':
		st = 11.2;
		break;
	case'5':
		printf("Exit");
		break;
		return 0;
	}
	printf("How many hours a person worked: \n");
	scanf_s("%f", &N);
	if (N < 40) {
		sum = st * N;
	}
	else {
		sum = b * (N - 39) + st * 39;
	}
	printf("Wages is %.0f $\n", sum);

	double nal = 0.0;
	if (sum < 301) {
		nal = sum * c1;
	}
	else {
		if ((sum > 300) && (sum < 451)) {
			nal = (sum - 300) * c2 + 300 * c1;
		}
		else {
			nal = (sum - 450) * c3 + 150 * c2 + 300 * c1;
		}
	}
	printf("Tax is %.1f $\n", nal);
	printf("Wages-taxes is %.1f $\n", sum - nal);
	return 0;
}
