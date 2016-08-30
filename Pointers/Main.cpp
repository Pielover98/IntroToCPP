/*
1.) Output would = STS
2.) int *p; 
	int i; 
	int k; 
	i = 42; 
	k = i; 
	p = &i;
3.) D.) *P = 75;
4.) You can't make a char pointer into a double
5.) 
*/
#include <iostream>
void main()
{
	int var = 128256;
	float far = var;
	printf("%f \n", far);
	far = *(float*)&var;
	printf("%f\n", far);
	getchar();
}

