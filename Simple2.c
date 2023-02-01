/* simple2.c by CIS185 Demonstrates a simple calculation. 
   Input is gathered from keyboard */

#include <stdio.h>

int main(void)
{
int num1=0, num2=0, answer=0;
printf ("Please enter the first number: ");
scanf (" %d", &num1);
printf ("Please enter the second number: ");
scanf (" %d", &num2);
answer = num1 + num2; 
printf ("Results: %d+%d=%d\n", num1, num2, answer);
printf ("You entered %d as your 1st number\n", num1);
printf ("Followed by %d as your 2nd number\n", num2);
printf ("After calculation, the result is %d\n\n", answer);
return 0;
}	