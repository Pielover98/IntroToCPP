#include <iostream>
int main()
{
	for (int i = 100; i >= 0; --i) // include 0 and 100
	{
		printf("%d \n", i);
	}
		getchar();
	{
		for (int i = 99; i >= 0; --i) // include 0 but not 100
		{
			printf("%d \n", i);
		}
		getchar();
	}
	{	
		for (int i = 100; i > 0; --i) // include 100 but not 0
		{
			printf("%d \n", i);
		}
	getchar();
	}
	{
		for (int i = 100; i >= 0; i -= 2) // decrement by 2
		{
			printf("%d \n", i);
		}
	getchar();
	}
}