//Author: Hugo Osuna
//Date: 03-24-26
//
//
//pi = 3.14;
//or Math.pi();
import java.util.Scanner;

public class hosuna10
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		double radius, height = 0.0;
		double vol = 0.0;
		System.out.printf("Enter the radius and height for the cylinder: \n");
		
		radius = input.nextDouble();
		height = input.nextDouble();
		
		vol = volume(radius, height);	
		System.out.printf("The resulting volume of the cylinder is: %.2f\n", vol); 
	}



	public static double volume (double rad, double high)
	{
		return (Math.PI * Math.pow(rad, 2)) * high;
	}	

}
