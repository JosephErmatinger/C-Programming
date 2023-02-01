/* TestArray.c by CIS185 Fall 2018 Joe Ermatinger */


/* The code below contains some syntax errors and incomplete areas.  
   Correct the syntax errors and follow the comments for instructions
   on code that needs completion.   
   When you are done, print the source code and an execution window
   and submit your TestArray.c file in Blackboard*/
   
#include <stdio.h>

int main(void)
{
	int items[4] = {600, 700, 540, 1290};
	int i = 0;
	int total = 0;

	printf("TestArray by Joe Ermatinger\n\n"); // Heading should display your name

    /*code a statement below that will print the LAST element of the array declared above */
	 printf("The value of the last element is %d", items[3]);
	
	
	/* code a "for" loop below - the purpose of the loop is to total all the
	   elements of the array */
	for (i=0; i < 4; i++){
		total += items[i];
	}
	/* the purpose of the following statement is to print the total */
	printf("\n\nTotal of all the elements is %d\n\n", total);

	/*write code below using "if" logic- the purpose of the logic is to display the words
	 TOTAL IS HIGH if the total is more than fifteen hundred */
	if  (total > 1500) 
		{	
			printf("TOTAL IS HIGH");
		}   
	  
	return 0;
	//remember to submit your source code in Blackboard under the UNIT TEST link
}