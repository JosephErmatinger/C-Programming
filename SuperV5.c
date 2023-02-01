// SuperV5.c Created by: Joe Ermatinger 10/31/2018   
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

/* Prototypes */
void 	printHeading(void);
int 	getHours(void);
int 	getMinutes(void);
int 	getSeconds(void);
int 	getSecondsT(int, int, int);
float   getHoursT(float);
float   getRate(int);
float   getUsage(float, float);
void    accumulateTotals(float);
void    printOutput(int, float, float, float);
char 	getCont(void);
void 	printTotals(void);

/* Global Variables */
float usageChargeT = 0.0f; 
int customerCount = 0; 

int main()
{
	/* Call printHeading function */
	printHeading();
	
	/* Variable Declarations */ 
	char cont = 'Y';
	
	/* Begin Main Loop */
	while (cont == 'y' || cont == 'Y'){
		
		/* In Loop Variable Declarations */
		int hours = 0, minutes = 0, seconds = 0, secondsT = 0;
		float hoursT = 0.0f;
		
		/* Input Section */
		
		/* Call getHours function */
		hours = getHours();
		
		/* Call getMinutes function */
		minutes = getMinutes();
		
		/* Call getSeconds function */
		seconds = getSeconds();
		
		/* Call getSecondsT function */
		secondsT = getSecondsT(seconds, minutes, hours);
		
		/* Call getHoursT function */
		hoursT = getHoursT((float) secondsT);
		
		/* Call getRate function */
		float rate = getRate(secondsT);
		
		/* Call getUsage function */
		float usageCharge = getUsage((float) secondsT, rate);
		
		/* Call accumulateTotals function */
		accumulateTotals(usageCharge);  
		
		/* Customer Output Section */
		/* Call printOutput function */
		printOutput(secondsT, hoursT, rate, usageCharge);
		
		/* Call getCont function */
		/* Prompt user to determine if another pass through loop should occur */
		cont = getCont(); 
	
	}  /* End Main Loop */
	
		/* Call printTotals function */
		/* Display Grand Totals and Counts */
		printTotals();
		
	/* End Program */
	return 0;
}	
/* Define printHeading function */
void printHeading(void){
	printf("Jayhawk Supercomputer Usage Calculator by Joe Ermatinger\n\n");
}
/* Define getHours function */
int getHours(void){
	int hours = 0;
	do {
			printf("Enter hours used as a whole number (0-23)   ");      /* prompt and input hours */
			scanf("%d", &hours);
			
			if (hours < 0 || hours > 23)
			{
				printf("\tOut of range! Enter 0 through 23\n\n");
			}		
		} while (hours < 0 || hours > 23);
		return hours;
}
/* Define getMinutes function */
int getMinutes(void){
	int minutes = 0;
	do {
			printf("\nEnter minutes used as a whole number (0-59) ");    /* prompt and input minutes */
			scanf("%d", &minutes);
			if (minutes < 0 || minutes > 59)
			{
				printf("\tOut of range! Enter 0 through 59\n");
			}		
		} while (minutes < 0 || minutes > 59);
		return minutes;
}	
/* Define getSeconds function */
int getSeconds(void){
	int seconds = 0;
	do {
			printf("\nEnter seconds used as a whole number (0-59) ");     /* prompt and input seconds */
			scanf("%d", &seconds);
			if (seconds < 0 || seconds > 59)
			{
				printf("\tOut of range! Enter 0 through 59\n");
			}	
		} while (seconds < 0 || seconds > 59);
		return seconds;
}
/* Define getSecondsT function */
int getSecondsT(int seconds, int minutes, int hours){
		return seconds + (minutes * 60) + (hours * 3600);
}
/* Define getHoursT function */
float getHoursT(float secondsT){
		return secondsT / 3600.0f;
}
/* Define getRate function */
float getRate(int secondsT){
	if      (secondsT <= 3000)
		{	
			return .67f;
		}
		else if (secondsT <= 6000)
		{
			return .57f;
		}	
		else if (secondsT <= 9000)
		{
			return .47f;
		}
		else if (secondsT <= 36000)
		{
			return .37f;
		}
		else if (secondsT <= 50000)
		{
			return .27f;
		}
		else  
		{
			return .17f;
		}
}
/* Define getUsage function */
float getUsage(float secondsT, float rate){ 
	float usageCharge = secondsT * rate;
		
		if (usageCharge > 9000.0f) 
		{	
			usageCharge -= 100.0f;
		}
		return usageCharge;
}
/* Define accumulateTotals function */
void accumulateTotals(float usageCharge){
		usageChargeT += usageCharge;     		 /* accumulate grand total */
		customerCount++;                         /* increment customer counter */
}
/* Define printOutput function */
void printOutput(int secondsT, float hoursT, float rate, float usageCharge){
		printf("\n\nTotal Seconds of Usage = %d", secondsT);
		printf("\n\n\nTotal Hours of Usage   = %.4f", hoursT);
		printf("\n\n\nUsage Rate Per Second  = %.2f", rate);
		printf("\n\nUsage Charge           = $%.2f", usageCharge);
		printf("\n\nWould you like to input another customer's usage data? (Y or N) ");
}
/* Define getCont function */
char getCont(){
		char cont = 'Y';
		scanf(" %c", &cont);  
		printf("\n");
		return cont;
}
/* Define printTotals function */ 
void printTotals(){
		printf("Number of Users Processed:  %d", customerCount);
		printf("\n\nGrand Total of all Usage Charges:  $%.2f", usageChargeT);
		printf("\n\nThank you for using the Jayhawk Supercomputer!");
}