#include <stdio.h> 
#include <string.h> 

int main() 
{
	int x = 0;
	char binary[50] = {};

	scanf_s("%d", &x);

	int tmp = x;
	int len = 0;
	for (int i = 0; tmp; ++i) {
		binary[i] = '0' + tmp % 2;
		tmp = tmp / 2;
		len++;
	}

	if (x == 0) {
		binary[0] = '0';
		len = 1;
	}

	for (int i = len - 1; i >= 0; --i) {
		printf("%c", binary[i]);
	}
}

