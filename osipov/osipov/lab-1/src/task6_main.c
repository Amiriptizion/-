#include <stdio.h>
#include <math.h>
1

int main()
{
	setlocale(LC_ALL, "RUS");

	printf("������� x:\n");
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}