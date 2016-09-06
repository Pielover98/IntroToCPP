#include <iostream>
#include "Dino.h"
Dino makeDino()
{
	Dino dino;
	dino.age = 100;
	dino.powerlvl = 9000;
	dino.dangerlvl = 9000;
	printf("What is dino's name?: ");
	scanf_s("%s", dino.name, 80);
	getchar();
	return dino;
}
void printDino(Dino dino)
{
	printf("\n\nYour dino's name is %s \nHe has an age of %f \nHe has a power level %f \nIts danger level is %f \nThis dino is seriously dangerous \n\n\n", dino.name, dino.age, dino.powerlvl, dino.dangerlvl);
}
void modifyDino(Dino &dino)
{
	printf("You can now change the power and danger levels of your dino \nIf you lower them you can make your dino a pet. \nIf you make them higher he is lost to the wild \nYou should hope he never returns \nPlease enter his new power level followed by a new danger level:");
	scanf_s("%f %f", &dino.powerlvl, &dino.dangerlvl);
	getchar();
}
void petDino(Dino &dino)
{
	printf("\n\nYou have made your dino's power level to %f \nAnd its danger level to %f \nYou can now use it as a pet \nInput f to feed your pet or input k to kill your pet: ", dino.powerlvl, dino.dangerlvl);
	scanf_s("%s", &dino.KillFeed, 80);
	getchar();
	switch (dino.KillFeed)
	{
	case 'f':
		printf("\n\nYou have choosen to feed your dino.\nHe is now happy");
		break;
	case 'F':
		printf("\n\nYou have choosen to feed your dino.\nHe is now happy");
		break;
	case 'k':
		printf("\n\nYou have choosen to kill your dino.\nHe is now dead \nYou are a terrible person");
		break;
	case 'K':
		printf("\n\nYou have choosen to kill your dino.\nHe is now dead \nYou are a terrible person");
		break;
	default:
		printf("\n\nYou have entered an invalid value you idiot \nYou must restart the program now");
		break;
	}
	getchar();
}