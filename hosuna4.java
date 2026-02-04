
//Author: Hugo Osuna
//Date: 02/03/26
//Program Description:
//This program displays a simple menu of 4 choices.
//Then displays a different saying depending on user selection.
import java.util.Scanner;

public class hosuna4{
public static void main(String[] args){
Scanner input = new Scanner(System.in);
String choice = " ";

System.out.println("Select One:\nRock\nPaper\nScissors\nwater");
choice = input.nextLine();
if (choice.equalsIgnoreCase("rock")){
	System.out.println("SMASH");
}
else if(choice.equalsIgnoreCase("paper")){
	System.out.println("WHOOSH");
}
else if(choice.equalsIgnoreCase("scissors")){
        System.out.println("SLICE");
}
else if(choice.equalsIgnoreCase("water")){
        System.out.println("SWISH")
		;
}
}
}
