#include <iostream>

int main()
{
	char charA = 0, charB = 0, charC = 0;

	printf("Please list two letters of the alphabet");
	scanf_s("%c %c", &charA, 1, &charB, 1);
	getchar();
	charA = ((charA - 65) % 32 + 65);
	charB = ((charB - 65) % 32 + 65);
	charC = ((charA + charB) / 2);
	printf("The middle letter is: %c", charC);
	getchar();
}