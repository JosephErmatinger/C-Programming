/*MarkupFun.c by Joe Ermatinger CIS 185 10/25/2018
  Input:     keyboard
  Output:    screen
  This program calculates the marked up shelf sales amount after the user inputs
  the inventory cost amount from the keyboard. Items are marked up by 44%.
  The output is sent to the screen. An item count and grand total of the market up
  values is accumulated and printed at the end of the program. 
  This program will include seperate functions for: heading, inputs,
  processing, and outputs after it is restructured using functions.
*/  
# include <stdio.h>

/* Prototypes */
void printHeading(void);
int getItemNo(void);
float getCost(void);
float calcMarkup(float);
void printResult(int, float, float);
char getAgain(void);
void printFinal(void);

/* Global Variables */
int itemCount = 0;
float grandTotal = 0.0f;

int main(void)
{
	int itemNo=0, itemCount=0;
	float cost=0.0f, markedup=0.0f, grandTotal = 0.0f;
	char again = 'Y';
	
	/* Call printHeading function */
	printHeading();
	
	/* Begin Loop */
	while (again == 'Y' || again == 'y')
	{
	
	/* Call input functions */
	itemNo = getItemNo();
	cost = getCost();
	
	/* Call calcMarkup functions */
	markedup = calcMarkup(cost);
	
	/* Call printResult function */
	printResult(itemNo, cost, markedup);
	
	/* Call getAgain function */
	again = getAgain();
	}
	
	/* Call printFinal function */
	printFinal();
	return 0;
}
	/* Define printHeading function */
	void printHeading(void)
	{
		printf("Markup Calculator by Joe Ermatinger\n");
	}
	/* Define getItemNo Function */
	int getItemNo(void)
  	{
		int localItemNo = 0;
		do
	{
		printf("\nEnter item number (101-999) ");
		scanf("%d", &localItemNo);
		if(localItemNo < 101 || localItemNo > 999)
		printf("Try again, enter 101-999\n");
	}while(localItemNo < 101 || localItemNo > 999);
	return localItemNo;	
	}	
	/* Define getCost function */
	float getCost(void)
	{
		float localCost = 0.0f;
		printf("Enter cost: ");
		scanf("%f", &localCost);
   		return localCost;
	}
	/* Define calcMarkup function */
	float calcMarkup(float localCost2)
	{
		float localMarkup = 0.0f;
		localMarkup = localCost2 * 1.44f;
		itemCount++;
		grandTotal += localMarkup;
		return localMarkup;
	}
	/* Define printResult function */
	void printResult(int outItemNo, float outCost, float outMarkup)
	{
		printf("\nItem %d has a cost of %.2f\n", outItemNo, outCost);
		printf("Markup is %.2f\n", outMarkup);
	}
	/* Define getAgain function */
	char getAgain(void)
	{
		char localAgain;
		printf("Enter Y to do another one: ");
		scanf(" %c", &localAgain);
		return localAgain;
	}
	/* Define printFinal function */
	void printFinal(void)
	{
		printf("Count is %d\n", itemCount);
		printf("Grand total is %.2f\n", grandTotal);
	}
	
	
	
	
	