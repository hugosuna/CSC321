//Final Project
//Author: Hugo Osuna
//
//Door #68
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int guessNum(void);
int main (void)
{
	char choice1 = ' ';
	char choice2[50] = " ";
	int choice3 = 0;
	char choice4 = ' '; 
	char choice5[50] = " ";
	char name[50] = " ";
	printf("Who dares enter?...\nIdentify your first name:\n");
	scanf("%49s", name);
	printf("\nWelcome %s, You've entered the puzzle box room.\nYou must now answer my riddles in order to progress:\n", name);
	guessNum();
	printf("Why was 6 afraid of 7?\nA) Because 7 EIGHT 9\nB) Because SIX SEVEN\nEnter 'A' or 'B'\n");
	scanf(" %c", &choice1);
	while (choice1 != 'A')
	{
		printf("Hmm, sorry guess again\n");
		scanf(" %c", &choice1);
	}
	printf("Correct!\nFill in the blank. What walks on 4 legs\nthen on two legs\nthen on three legs?\nThe answer is a _____.\n"); 
	scanf("%49s", choice2);
	while (!(strcmp(choice2, "human") == 0) && !(strcmp(choice2, "person") == 0))
        {
                printf("Hmm, sorry guess again\n");
                scanf("%49s", choice2);
        }
	printf("Correct!\n");
	printf("Only a real human could have gotten that correct.\nWhat is 9 plus 10?\n21\t19\t911\nEnter your choice:\n");
	scanf("%d", &choice3);
        while (choice3 != 19)
        {
		if (choice3 == 21)
                {
                	printf("401 error\ndo you even vine?\n");
		}
		if (choice3 == 911)
                {
                        printf("Call the Cops!!\n");
                }
		scanf("%d", &choice3);
        }
	printf("Correct!\nWas there only one true answer?\n");
	printf("\nWhat is the begining of Eternity, \nthe End of time and space, \nthe beginning of Every End, \nand the end of every race?\n");
	scanf(" %c", &choice4);                                         
	while (choice4 != 'E' && choice4 != 'e')
	{
		printf("Everything, Everywhere, all at once...\n");
		scanf(" %c", &choice4);                                 
	}
	printf("ExcEptionally done!\n...onto the final trial.\n");
	printf("I belong to you, but others use me more often than you do. \nWhat am I?\n");
	scanf("%49s", choice5);
	while (!(strcasecmp(choice5, "name") == 0))
	{
		printf("\nDon't give up, the answer calls upon you...\n");
		scanf("%49s", choice5);
	}
	printf("\nHmm...verify your answer:\n");
	scanf("%49s", choice5);
        while (!(strcasecmp(choice5, name) == 0))
        {
                printf("\nLook nowhere but to yourself for the answer\n");
                scanf("%49s", choice5);
        }
	printf("Well done %s! \nYou are one of few to pass the trials of destiny. \nYou may now continue on your journey. \nBest of luck...\n", name);

	return EXIT_SUCCESS;

}

int guessNum(void)
{
	int guess = 0;
	int answer = (rand() %10) + 1;
	printf("\nGuess the number between 1 and 10: \n");
	scanf("%d", &guess);
	
	while (guess != answer)
	{
                if (guess >= 11 || guess <= 0)
                {
			printf("You input a number that is out of range (1-10). Re-enter a valid number: \n");
                        scanf("%d", &guess);
                }
		else if (guess != answer && guess < 11 && guess > 0)
		{
			if (guess < answer)
			{
				printf("WRONG. Too low\n");
			}
			else if (guess > answer)
			{
				printf("WRONG. Too high\n");
			}
			scanf("%d", &guess);
		}
	}
	if (guess == answer)
	{
		printf("\nCorrect...It seemse you've bested me.!\nOnto the next trial\n");
		
	}
}


