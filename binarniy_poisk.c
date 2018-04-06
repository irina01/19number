#include "stdafx.h"
#include <stdio.h>
#include <string.h>
int main() {
	char str[50];
	char x;
	scanf_s("%s", str, 50);
	getchar();
	scanf_s("%c", &x);	
	int i, y, low, high, mid;
	n = strlen(str);
	low = 0;
	high = y - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (str[mid] == x) {
			printf("pos : %d \n", mid);
			return 0;
		}
		if (str[mid] < x) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return 0;
}
