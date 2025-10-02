#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>

int main()
{
	int a;
	setlocale(LC_CTYPE, "RUS");
	puts("ВЫЧИСЛЕНИЕ ОБЪЁМА И ПЛОЩАДИ БОКОВОЙ ПОВЕРНОСТИ КУБА\n");
	puts("***************************************************\n\n");
	puts("Введите число:");
	scanf("%d", &a);
	puts("\n");
	int volume = a * a * a;
	int s = a * a * 4;
	printf("Объём куба равен %d см^3, площадь боковой поверхности куба равна %d см^2.\n\n", volume, s);
	return 0;
}