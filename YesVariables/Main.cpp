//	1.) Find the value of each of the following expressions or explain why it is not a valid expression. No coding 
//		a) 2/3 + 3/5 = 0 + 0 = 0
//		b) 2%3 + 3%5 = 2 + 3 = 5
//		c) 23%15-2 = 0
//		d) 25*1/2 = 12
//		e.) 25*1.0/2 = 0
//		f.) 25*(1/2) = 0
//		g.) 235/8+7 = 36
//		h.) 235/8.0+7 = 0.061538
//	2.)  Select Suitable Variables
//		a.) The average height of students in your class:  int AvgHeight = 6
//		b.) The tax rate for incomes over $65000: int taxUp >= 65000
//		c.) The tax rate of incomes below $5000: int taxDown <= 5000
//		d.) The total cost of all the games on my steam library: int steamCost = 3500
//	3.) Select Suitable Data Types
//		a.) 121 = char
//		b.) 9.4 = float
//		c.) r = int
//		d.) 100000 = int
//		e.) False = bool
//	5.)
//		a.) 1 A 45 = i: 1 ch: A f: 45
//		b.) 1A45 =  i: 1 ch: A f: 45
//		c.) 1 9 45 =  i: 1 ch: 9 f: 45
//		d.) 1 945 =  i: 1 ch: 9 f: 45
//		e.) B 45.6 =  i: B ch: 45 f: 6
//		f.) 1BC5.6 =  i: 1 ch: BC f: 5.6





#include <iostream>

int main()
{
	/*
	printf("Hello World!  \n");





	
	float var;				// Variable Definition 
							// I;m asking th ecomputer for memory
							// THis memory will be used for integer math
							// I've given this variable the alias 'var'
							// var is unitiialized


	var = 23;				// Variable Assignment and Initialization
							// I'm using the literal value '12'
							// And Assigning into my variable



						
	int ivar = var + 4;		// First assignment is and Initialization 
							// Variable Instantiation
							// When you define and initialize at the same time



	 
	printf("%f %d \n", var, ivar);
	printf("%d \n", (25*1/2));
	printf("%d \n", (25 * 1.0/2));
	printf("%d \n", (25 * (1 / 2)));
	printf("%d \n", (235 /8+7));
	printf("%d \n", (235 / 8.0 + 7));
	printf("%f \n", (((20 + 1) / 2 - 2.0) / (23 + 3)*0.2));

	*/

int i = 0;
float f = 0;
char ch = 'a';
std::cin >> i >> ch >> f;
getchar();
std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;
getchar();
}