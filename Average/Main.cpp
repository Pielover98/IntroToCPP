#include <iostream>

int main()
{
	int varA= 0, varB = 0, varC = 0, varD = 0, varE = 0;
	printf("please enter 5 numbers: \n");
	scanf_s("%d %d %d %d %d", &varA, &varB, &varC, &varD, &varE);
	getchar();
	printf("%d average: \n", ((varA + varB + varC + varD + varE) / 5));
	getchar();
}
