//Author: Hugo Osuna
//
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	srand(time(NULL));	
	int guess = 0; 
	int answer = (rand() %20) + 1;

	printf("Guess the number between 1 and 20: \n");
	scanf("%d", &guess);
	/*while (guess >= 21 || guess <= 0)
	{
		printf("You input a number that is out of range (1-20). Re-enter a valid number: \n");
		if (guess >= 21 || guess <= 0)
		{
			scanf("%d", &guess);
		}
	}
	*/
	while (guess != answer)
	{
                if (guess >= 21 || guess <= 0)
                {
			printf("You input a number that is out of range (1-20). Re-enter a valid number: \n");
                        scanf("%d", &guess);
                }
		else if (guess != answer && guess < 21 && guess > 0)
		{
			if (guess < answer)
			{
				printf("Nope. You lost and your guess is lower than my number.\n");
			}
			else if (guess > answer)
			{
				printf("Nope. You lost and your guess is higher than my number.\n");
			}
			scanf("%d", &guess);
		}
	}	
	if (guess == answer)
	{
		for (int i = 0; i < answer; i++)
		{
			printf("You won and guessed the number correctly!\n");
		}
	}	
}

