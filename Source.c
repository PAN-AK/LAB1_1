#include <stdio.h>
#include <locale.h>

void date()
{
	puts(" _   _     _  _     _  _  _  _  ");
	puts(" _| |_    | | _|    _|| || ||_  ");
	puts("|_  |_| * |_| _| * |_ |_||_||_| ");
	

}
void name()
{
	setlocale(LC_ALL, "RUS");
	puts("***************************************************");
	puts("*     ����: ���������� ����������� ����������     *");
	puts("*      �������� �������� �.�.                     *");
	puts("*                                                 *");
	puts("***************************************************");

}
void main()
{
	name();
	setlocale(LC_ALL, "RUS");
	puts("������ ���");
	date();
	getchar();
	return 11;

}