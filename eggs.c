#include <stdio.h>
//typecasting
int main()
{
	printf("The number of eggs for the day: ");

	int eggs;
	scanf("%i", &eggs);

	double dozen = (double) eggs / 12; //(double)acts on eggs

	printf("You have %f dozen eggs.\n", dozen);

	return 0;

}
