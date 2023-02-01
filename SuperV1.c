// Project 1 First Draft: SuperV1.c Created by: Joe Ermatinger 9/25/2018   

#include <stdio.h>

int main()
{
	int hours = 0, minutes = 0, seconds = 0, secondsT = 0;
	float hoursT = 0.0f;
	
	printf("Jayhawk Supercomputer Usage Calculator by Joe Ermatinger \n\n");
	
	printf("Enter hours used as a whole number (0-23)\t");
	scanf("%d", &hours);
	
	printf("\nEnter minutes used as a whole number (0-59)\t");
	scanf("%d", &minutes);
	
	printf("\nEnter seconds used as a whole number (0-59)\t");
	scanf("%d", &seconds);
	
	secondsT = seconds + (minutes * 60) + (hours * 3600);
	hoursT = (float) secondsT / 3600.0f;
	
	printf("\n\nTotal Seconds of Usage = %d", secondsT);
	printf("\n\n\nTotal Hours of Usage   = %.4f", hoursT);
	
	printf("\n\n\nThank you for using the Jayhawk Supercomputer!");
	
	return 0;
}	
