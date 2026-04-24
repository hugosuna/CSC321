//Author Hugo Osuna
//Exam 2 program
//
//

#include <stdlib.h>
#include <stdio.h>

void printName(int num);


int main(void)
{
	int myNum = 0;
	printf("Enter a number: \n");
	scanf("%d", &myNum);
	printName(myNum);

	return EXIT_SUCCESS;
}

void printName(int num)
{
	for (int i = 0; i < 4; i++)
 	{
		printf("\nHugo%d\n", num);
	}
}




