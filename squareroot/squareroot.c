#include <stdio.h>
#include <stdlib.h>

float square_rooting(float a);
int validity_checker(float a);
float og_number;
int argc;

int main(int argc, char *argv[])
{
	char *endptr;
	og_number = strtof(argv[1], &endptr);
	float final_number = square_rooting(og_number);
	printf("The square root of %f, is %f!! \n", og_number, final_number);
	return validity_checker(og_number);
}

// Makes sure the user does not input a negative number
int validity_checker(float a)
{
	if (og_number < 0)
	{
		printf("error! error! can't square root %f \n", og_number);
		return 1;
	}
}

// creates a 'number line'
float square_rooting(float a)
{
	float start = 0;
	float end = og_number;
	float decimal = 0;
	float average;
	while (decimal < 50)
	{
		// finds the middle of the 'number line'
		average = (start + end)/2;
		float square = average * average;
		// reduces the number line to its lower half
		if (square > og_number)
		{
			end = average;
		}
		// reduces the number line to its upper half
		else if (square < og_number)
		{
			start = average;
		}
		// ends the while loop
		else if(square = og_number)
		{
			decimal = 50;
		}
		decimal ++;
	}
	return average;
}