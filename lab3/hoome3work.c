#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>

int main()
{
	int a;
	setlocale(LC_CTYPE, "RUS");
	puts("���������� ��ڨ�� � ������� ������� ���������� ����\n");
	puts("***************************************************\n\n");
	puts("������� �����:");
	scanf("%d", &a);
	puts("\n");
	int volume = a * a * a;
	int s = a * a * 4;
	printf("����� ���� ����� %d ��^3, ������� ������� ����������� ���� ����� %d ��^2.\n\n", volume, s);
	return 0;
}