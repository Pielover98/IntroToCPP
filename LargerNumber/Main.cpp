#include <iostream>
// 2.) Write a program that asks the user for two numbers and then display the larger number to the console
int main()
{
	int varA = 0, varB = 0;
	printf("Please input two numbers with a space in between them then push enter");
	scanf_s("%d %d", &varA, &varB);
	getchar();

	if (varA < varB)
	{
		int tswap = varA;
		varA = varB;
		varB = tswap;
	}
	printf("%d >= %d", varA, varB);
	getchar();
}
/*
	8.) Declarations
		1.) True
		2.) True
		3.) 20
		4.) True
		5.) True
		6.) False
		7.) True
		8.) True
		9.) False
		10.) True

	9.)
		a.) True
		b.) True
		c.) False
		d.) True
		e.) True
*/