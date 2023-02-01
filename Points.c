/* Joe Ermatinger 10/02/2018 points.c */

#include <stdio.h>

int main(void)
{
   /* Variable Declarations */
   int points1 = 0;
   int points2 = 0;
   int points3 = 0;
   int sum = 0; 
   float average = 0.0f;
   
   /*Input Section */
   printf("Points Calculator by Joe Ermatinger\n\n");
   
   printf("Enter points earned on quiz 1: ");
   scanf("%d", &points1);

   printf("Enter points earned on quiz 2: ");
   scanf("%d", &points2);

   printf("Enter points earned on quiz 3: ");
   scanf("%d", &points3);   
   
   /* Calculations */
   sum = points1 + points2 + points3; 
   
   average = (float) sum / 3;
   
   /* Output Section */
   
   printf( "\n\n\nTotal Quiz Points:  %d\n", sum);
     
   printf("Quiz Average = %.2f\n\n", average);
   
   /* End Program */
   
   return 0;
   
}
