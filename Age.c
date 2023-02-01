/* Age.C by Joe Ermatinger CIS185 2/2017 */

/* Input:   Keyboard
   Output:  Screen
   This program requests a person's age, performs input validation
   on the input value and displays the age.  The age will be validated 
   to ensure that it is not a negative value and does not exceed 120.
 */

#include <stdio.h>


int main()
  {
  /* Variable Declaration */
  int age=0;

  /* Heading */
  printf("Age Validation by Joe Ermatinger\n\n");

  
  /* Input Section. Values less than 0 or greater than 120 are rejected.
     The user is looped back for re-input. */
	
	do
	{
	printf("Enter age (0-120):");
	scanf("%d", &age);
	if(age<0 || age>120)
	{
	printf("Try again! Enter 0-120 please!\n");
	}
	}	while(age<0 || age>120);

	/* Output Section */
  printf("\n\nThe age is %d\n", age);

  return 0;
  }
