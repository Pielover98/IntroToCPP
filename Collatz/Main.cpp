#include <iostream>

void main()
{
	unsigned int value = 0;
	printf("Input a number to evaluate the collatz sequence: ");
	scanf_s("%d", &value);
	getchar();
	printf("%d ", value);
	while (value > 1)
	{
		if (value % 2 == 0) value = value / 2;
		else			value = 3 * value + 1;
		printf("%d ", value);
	}
	getchar();
}