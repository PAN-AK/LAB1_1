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
	puts("*     тема: Разработка консольного приложения     *");
	puts("*      Выполнил Пантыкин А.И.                     *");
	puts("*                                                 *");
	puts("***************************************************");

}
void main()
{
	name();
	setlocale(LC_ALL, "RUS");
	puts("привет мир");
	date();
	getchar();
	return 11;

}