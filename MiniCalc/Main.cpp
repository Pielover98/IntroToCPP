#include <iostream>
int main()
{
	char charA = 0;
	int varA = 0, varB = 0, varC = 0;
	printf("This is a simple calulator program \n");
	printf("Please write your math problem here using (+,-,*,/,%): ");
	scanf_s(" %d %c %d", &varA, &charA, 1, &varB);
	getchar();

	switch (charA)
	{
	case '+':
		varC = varA + varB;
		break;
	case '-':
		varC = varA - varB;
		break;
	case '*':
		varC = varA * varB;
		break;

	case '/':
		varC = varA / varB;
		break;
	case '%':
		varC = varA % varB;
		break;
		getchar;
	}
	printf("The answer is: %d", varC);
	getchar();
}