#include <stdio.h>
#include "stdafx.h"

int main()
{
	float res = .0, x;
	char oper;

	printf("Type your expression\n");
	while (oper != 'E') {
		scanf_s("%f %c", &x, &oper);
		switch (oper) {
		case 'S':
			res = x;
			break;
		case '+':
			res += x;
			break;
		case '-':
			res -= x;
			break;
		case '*':
			res *= x;
			break;
		case '/':
			if (x == 0)
				printf("Error\n");
			else
				res /= x;
			break;
		default:
			printf("Error\n");
		}
		printf("= %f\n", res);
	}
	return 0;
}

