#include <stdio.h>

int main(void) {
	int n, NUM;
	printf("\n");
	printf("Таблица чисел\n\n");
	NUM = 5;
	for (n = 5; n <= 50; n = n + 5) //ключевое условие
	{
		if (n % 5 == 0)  //проверяем на кратность 5 по условию
			NUM = n * (n + 1) / 2; //формула
		printf("%2i %4i\n", n, NUM);
	}
		return 0;
}

