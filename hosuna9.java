//Author: Hugo Osuna
//Date: 03-17-26
//
import java.util.Scanner;
import java.util.Random;

public class hosuna9 
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		Random randy = new Random();

		int guess = 0;
			int answer = randy.nextInt(20) + 1;
		
        	System.out.print("Guess the number between 1 and 20: \n");
        	guess = input.nextInt();
		while (guess != answer)
		{
                	if (guess >= 21 || guess <= 0)
                	{
                        	System.out.print("You input a number that is out of range (1-20). Re-enter a valid number: \n");
                        	guess = input.nextInt();
                	}
                	else if (guess != answer && guess < 21 && guess > 0)
                	{
                        	if (guess < answer)
                        	{
                                	System.out.print("Nope. You lost and your guess is lower than my number.\n");
                        	}
                        	else if (guess > answer)
                        	{
                                	System.out.print("Nope. You lost and your guess is higher than my number.\n");
                        	}
                        	guess = input.nextInt();
                	}
        	}
		if (guess == answer)
        	{
                	for (int i = 0; i < answer; i++)
                	{
                        	System.out.print("You won and guessed the number correctly!\n");
                	}
        	}
		
	}
}

