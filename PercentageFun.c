/* Percentage.c by Joe Ermatinger 11/1/2018 */

/* Input: Keyboard
   Output: Screen
   This program calculates the percentage correct after the user inputs
   the number of points received and points possible from the keyboard.
   A count of the number of students processed will be accumulated, which will 
   then be dispayed at the end.
   
   This program will include separate functions for: heading, input,
   processing, output and final output after it has be restructured.
*/

#include <stdio.h>

/*************************************************************************************************/
	/* Prototypes */
void printHeading (void);
int getPtsR (void);
int getPtsP (void);
float calcPercent(int, int);
void printPts (int, int, float);
char getAgain (void);
void printFinal (void);

/*************************************************************************************************/
	/* Global Variables */
int count = 0;

/*************************************************************************************************/
	/* Start of Main */

int main (void)
{
	/* Declaration */
	int ptsreceived=0, ptspossible=0;
	float percentage=0.0f;
	char again = 'Y';
	
/*************************************************************************************************/
	/* Heading Section */
	printHeading(); // call output function 
	
/*************************************************************************************************/
	/* Begin Loop */
	while (again == 'Y' || again == 'y')
	{
/*************************************************************************************************/		
	/* Input Section */
		ptsreceived = getPtsR(); // call input function
		ptspossible = getPtsP(); // call input function
		
/*************************************************************************************************/		
	/* Processing Section */
		percentage = calcPercent(ptsreceived, ptspossible); // call process function

/*************************************************************************************************/
	/* Output Section */
		printPts(ptsreceived, ptspossible, percentage); // call output function 

/*************************************************************************************************/	
	/* Count and Loop */
		again = getAgain(); // call input function 
			
	}
/*************************************************************************************************/	
	/* Print Final Count and End Program */
		printFinal(); // call output function
	
/*************************************************************************************************/
	/* End of Main */
	return 0;
}

/*************************************************************************************************/
	/* Define printHeading Function */
	
	void printHeading (void)  
{
		printf(" Percentage Calculator by Joe Ermatinger\n\n");
}
/*************************************************************************************************/
	/* Define getPtsR Function */
	int getPtsR (void)
{	
		int ptsR = 0;
		printf("\n Enter the number of points received ");
		scanf("%d", &ptsR);
		return ptsR;
}	
/*************************************************************************************************/
	/* Define getPtsP Fucntion */
	int getPtsP (void)
{	
		int ptsP = 0;
		printf(" Enter the number of points possible ");
		scanf("%d", &ptsP);
			return ptsP;
}
/*************************************************************************************************/
	/* Define calcPercent Function */
	float calcPercent (int outPtsR, int outPtsP)
{
		float cPercent = 0.0f;
		cPercent = (float) outPtsR / (float) outPtsP * 100.0f;
			return cPercent;
}
/*************************************************************************************************/
	/* Define printPts Function */
	void printPts (int outPtsR, int outPtsP, float outPercent)
{
		printf("\n\n Student received %d points out of %d possible", outPtsR, outPtsP);
		printf("\n\n\n The percentage is %.2f\n\n", outPercent);
}
/*************************************************************************************************/
	/* Define getAgain Function */
	char getAgain (void)
{	
		char localAgain;
		count++;
		printf(" Would you like to enter another student's points? ");
		scanf(" %c", &localAgain);
			return localAgain;
}	
/*************************************************************************************************/
	/* Define printFinal Function */
	void printFinal (void)
{	
		printf("\n\n Total students processed: %d\n", count);
}