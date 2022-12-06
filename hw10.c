#include <stdio.h>
#include <string.h>

struct city
{
	char Name[50];
	char Country[50];
	char Population[50];
};

int main()
{
	struct city city1, city2, city3;
	printf("Input three cities: \n");
	printf("Name> ");
	fgets(city1.Name, strlen(city1.Name), stdin);
	city1.Name[strlen(city1.Name) - 1] = 0;
	printf("Country> ");
	fgets(city1.Country, strlen(city1.Country), stdin);
	city1.Country[strlen(city1.Country) - 1] = 0;
	printf("Population> ");
	fgets(city1.Population, strlen(city1.Population), stdin);
	city1.Population[strlen(city1.Population) - 1] = 0;

	printf("Name> ");
	fgets(city2.Name, strlen(city2.Name), stdin);
	city2.Name[strlen(city2.Name) - 1] = 0;
	printf("Country> ");
	fgets(city2.Country, strlen(city2.Country), stdin);
	city2.Country[strlen(city2.Country) - 1] = 0;
	printf("Population> ");
	fgets(city2.Population, strlen(city2.Population), stdin);
	city2.Population[strlen(city2.Population) - 1] = 0;

	printf("Name> ");
	fgets(city3.Name, strlen(city3.Name), stdin);
	city3.Name[strlen(city3.Name) - 1] = 0;
	printf("Country> ");
	fgets(city3.Country, strlen(city3.Country), stdin);
	city3.Country[strlen(city3.Country) - 1] = 0;
	printf("Population> ");
	fgets(city3.Population, strlen(city3.Population), stdin);
	city3.Population[strlen(city3.Population) - 1] = 0;

	printf("\nPrinting the three cities: \n");
	printf("1. %s in %s with a population of %s people \n", city1.Name, city1.Country, city1.Population);
	printf("2. %s in %s with a population of %s people \n", city2.Name, city2.Country, city2.Population);
	printf("3. %s in %s with a population of %s people", city3.Name, city3.Country, city3.Population);
	return 0;
}