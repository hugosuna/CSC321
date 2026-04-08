//Author: Hugo Osuna

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double hypTriRight (double base, double height);

int main(void)
{
	double b = 0.0;
	double h = 0.0;
	double hypotnuse = 0.0;
	printf("Enter a base and a height for the triangle: \n");
	scanf("%lf %lf", &b, &h);
	hypotnuse = hypTriRight(b, h);	
	
	printf("The resulting hypotnuse of the triangle is: %lf\n", hypotnuse); 

	return 0;
}	


double hypTriRight(double base, double height)
{
	return sqrt(pow(base, 2) + pow(height, 2));
}


