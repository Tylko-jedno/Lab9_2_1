#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define z 5 // директива препроцесора – макровизначення
#define SQR(x) ((x)*(x))
#define MAX(x,y) ((x)>(y))?(x):(y)
#define MIN(x,y) ((x)<(y))?(x):(y)
#define ABS(x) abs(x)
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)
 // використовується символ продовження макроса '\'
// символ '#' використовується для об’єднання рядків
 // виведення повідомлення та значення дійсного числа
#define PRINTR(w) puts ("result :"); \
 printf (#w"=%f\n",(float)w)

void main()
{
	puts("Lab 9.2.1 Using macros and preprocessing directive");
	int x, y,
		kvadr,
		kvadr_a,
		maxim,
		abs_,
		minimum; 
		
	char ch;
	do
	{
#if (z>=1 && z<10)
		puts("Input 2 integer numbers");
		scanf_s("%d", &x);
		PRINTI(x);
		scanf_s("%d", &y);
		PRINTI(y);
		PRINTI(z);
		maxim = MAX(x+y, x+z);
		kvadr = SQR(maxim);
		PRINTR(maxim);
#elif (z < 1 || z >= 10)
		{
			puts("Input 2 integer numbers");
			scanf_s("%d", &x);
			PRINTI(x);
			scanf("%d", &y);
			PRINTI(y);
			PRINTI(z);
			kvadr_a = SQR(x);
			abs_ = ABS(y - z);
			minimum = MIN(kvadr_a, 5*abs_);
		}
#endif
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}

