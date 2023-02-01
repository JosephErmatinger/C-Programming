// Project 1 Finalized Draft: SuperV4.c Created by: Joe Ermatinger 10/24/2018   
/* Input: Keyboard
   Output: Screen
   This program calculates the usage charge for the Jayhawk Supercomputer as 
   well as calculates the grand total of all usage charges from multiple users. 
   Input will come from the keyboard using scanf(). Output will be sent to the 
   screen using printf(). The user will be prompted to enter the hours, minutes, 
   and seconds of usage time. The total amount of usage time is then converted into 
   total seconds & total hours of usage and then displayed to the user. Total 
   seconds is then used to assign a usage rate which is then used to assign a 
   total usage charge. A do while loop is used to validate user input. A while 
   loop is used to ask if they would like to enter another customer and if they do the 
   customer count as well as grand total of all usage charges are accumulated. The number of 
   users and grand total of all usage charges are displayed when the loop terminates. */ 
  
#include <stdio.h>

int main()
{
    /* Display Heading */
	printf("Jayhawk Supercomputer Usage Calculator by Joe Ermatinger\n\n");
	
	/* Variable Declarations */ 
	float usageChargeT = 0.0f; 
	int customerCount = 0; 
	char cont = 'Y';
	
	/* Begin Main Loop */
	while (cont == 'y' || cont == 'Y'){
		
		/* In Loop Variable Declarations */
		int hours = 0, minutes = 0, seconds = 0, secondsT = 0;
		float hoursT = 0.0f;
		
		/* Input Section */
		do {
			printf("Enter hours used as a whole number (0-23)   ");      /* prompt and input hours */
			scanf("%d", &hours);
			
			if (hours < 0 || hours > 23)
			{
				printf("\tOut of range! Enter 0 through 23\n\n");
			}		
		} while (hours < 0 || hours > 23);
		
		do {
			printf("\nEnter minutes used as a whole number (0-59) ");    /* prompt and input minutes */
			scanf("%d", &minutes);
			if (minutes < 0 || minutes > 59)
			{
				printf("\tOut of range! Enter 0 through 59\n");
			}		
		} while (minutes < 0 || minutes > 59);
		
		do {
			printf("\nEnter seconds used as a whole number (0-59) ");     /* prompt and input seconds */
			scanf("%d", &seconds);
			if (seconds < 0 || seconds > 59)
			{
				printf("\tOut of range! Enter 0 through 59\n");
			}	
		} while (seconds < 0 || seconds > 59);
		
		/* Processing Section */
		secondsT = seconds + (minutes * 60) + (hours * 3600);
		hoursT = (float) secondsT / 3600.0f;
		
		float rate = 0.0f;
		
		if      (secondsT <= 3000)
		{	
			rate = .67f;
		}
		else if (secondsT <= 6000)
		{
			rate = .57f;
		}	
		else if (secondsT <= 9000)
		{
			rate = .47f;
		}
		else if (secondsT <= 36000)
		{
			rate = .37f;
		}
		else if (secondsT <= 50000)
		{
			rate = .27f;
		}
		else  
		{
			rate = .17f;
		}
		
		float usageCharge = (float)secondsT * rate;
		
		if (usageCharge > 9000.0f) 
		{	
			usageCharge -= 100.0f;
		}
		
		usageChargeT += usageCharge;     /* accumulate grand total */
		customerCount++;                 /* increment customer counter */  
		
		/* Customer Output Section */
		printf("\n\nTotal Seconds of Usage = %d", secondsT);
		printf("\n\n\nTotal Hours of Usage   = %.4f", hoursT);
		printf("\n\n\nUsage Rate Per Second  = %.2f", rate);
		printf("\n\nUsage Charge           = $%.2f", usageCharge);
		printf("\n\nWould you like to input another customer's usage data? (Y or N) ");
		
		/* Prompt user to determine if another pass through loop should occur */
		scanf(" %c", &cont);  
		printf("\n");
	
	}  /* End Main Loop */
		
	/* Display Grand Totals and Counts */
	printf("Number of Users Processed:  %d", customerCount);
	printf("\n\nGrand Total of all Usage Charges:  $%.2f", usageChargeT);
	printf("\n\nThank you for using the Jayhawk Supercomputer!");
	
	/* End Program */
	return 0;
}	
