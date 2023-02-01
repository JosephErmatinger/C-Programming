// Project 1 Second Draft: SuperV2.c Created by: Joe Ermatinger 10/11/2018   

#include <stdio.h>

int main()
{
	int hours = 0, minutes = 0, seconds = 0, secondsT = 0;
	float hoursT = 0.0f;
	
	printf("Jayhawk Supercomputer Usage Calculator by Joe Ermatinger \n\n");
	
	printf("Enter hours used as a whole number (0-23)   ");
	scanf("%d", &hours);
	
	printf("\nEnter minutes used as a whole number (0-59) ");
	scanf("%d", &minutes);
	
	printf("\nEnter seconds used as a whole number (0-59) ");
	scanf("%d", &seconds);
	
	secondsT = seconds + (minutes * 60) + (hours * 3600);
	hoursT = (float) secondsT / 3600.0f;
	
	float rate = 0.0f;
	
	if (secondsT >= 0 &&  secondsT <= 3000)
	{	
		rate = .67;
	}
	else if (secondsT <= 6000)
	{
		rate = .57;
	}	
	else if (secondsT <= 9000)
	{
		rate = .47;
	}
	else if (secondsT <= 36000)
	{
		rate = .37;
	}
	else if (secondsT <= 50000)
	{
		rate = .27;
	}
	else if (secondsT >= 50001)
	{
		rate = .17;
	}
	
	float usageCharge = (float)secondsT * rate;
	
	if (usageCharge > 9000) 
	{	
		usageCharge - 100.0f;
	}
	
	printf("\n\nTotal Seconds of Usage = %d", secondsT);
	printf("\n\n\nTotal Hours of Usage   = %.4f", hoursT);
	printf("\n\n\nUsage Rate Per Second  = %.2f", rate);
	printf("\n\nUsage Charge           = $%.2f", usageCharge);
	printf("\n\nThank you for using the Jayhawk Supercomputer!");
	
	return 0;
}	
