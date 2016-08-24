#include <iostream>
int main()
{
	int varA = 0, varC = 0;
	printf("This program will tell you how many days are in a month when you input the number that corresponds with that month \n");
	printf("Please enter the number of the month you seeketh: ");
	scanf_s("%d", &varA);
	getchar();

	switch (varA)
	{
	case 1:
		varC = 31;
		break;

	case 2:
		varC = 28;
		break;
	case 3:
		varC = 31;
		break;
	case 4:
		varC = 30;
		break;
	case 5:
		varC = 31;
		break;
	case 6:
		varC = 30;
		break;
	case 7:
		varC = 31;
		break;
	case 8:
		varC = 30;
		break;
	case 9:
		varC = 31;
		break;
	case 10:
		varC = 30;
		break;
	case 11:
		varC = 31;
		break;
	case 12:
		varC = 30;
		break;
	default:
		printf("The number you entered has made an error\t");
		break;
	
	}
	printf(" The amount of days in that month is %d", varC);
	getchar();
}