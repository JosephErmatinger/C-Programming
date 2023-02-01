/* FileCreation.c Created by: Joe Ermatinger 12/01/2018   
   Input: Keyboard
   Output: Screen and Ermatinger.txt file
   This program creates a sequential file by writing strings and other data types
   to a text file. The user is prompted to provide the input. The created text
   file will later be used as input in the "ReadMyFile.cpp" application. Input will 
   come from the keyboard using scanf. Output consisting of numbers will be written 
   to the "InOutFile.txt" file with fprintf() and strings will be written to the file
   with fputs(). Output will also be displayed on the screen using printf(). The user 
   is able to enter as many records as they would like. */ 

#include <stdio.h>
#include <string.h>

/* structure declaration */
typedef struct {
	int id;
	int age;
	float initialPrice;
	float currentPrice;
	char botanicalName[25];
	char cultivar[25];
	char commonName[25];
	char classification[25];
} Record;

int main (void)
{														/* begin main */
	/* variable declarations */
	char cont;
	Record record;
	record.id = 0;

/* file pointer */
FILE * filePointer;

/* display heading */
printf("FileCreation Application by Joe Ermatinger 11/28/2018 CIS185\n\n");

	/* if file is open write if not terminate */
	if ((filePointer = fopen ("InOutFile.txt", "w")) == NULL ) {
		printf( "File could not be opened\n"); 
	}
	else { 																			/* begin else */
		do
		{																			/* begin do while */
			/* prompt user to enter input */
			printf("Enter a value for age: ");
			scanf("%d", &record.age);
			printf("Enter a value for initial price: ");
			scanf("%f", &record.initialPrice);
			printf("Enter a value for current price: ");
			scanf("%f", &record.currentPrice);
			while (getchar() != '\n');
			printf("Enter a value for botanical name: ");
			fgets(record.botanicalName, 25, stdin);
			printf("Enter a value for cultivar: ");
			fgets(record.cultivar, 25, stdin);
			printf("Enter a value for common name: ");
			fgets(record.commonName, 25, stdin);
			printf("Enter a value for classification: ");
			fgets(record.classification, 25, stdin);
			
			/* print user input to file */
			fprintf(filePointer, "%d\n", record.id);
			fprintf(filePointer, "%d\n", record.age);
			fprintf(filePointer, "%.2f\n", record.initialPrice);
			fprintf(filePointer, "%.2f\n", record.currentPrice);
			fputs(record.botanicalName, filePointer);
			fputs(record.cultivar, filePointer);
			fputs(record.commonName, filePointer);
			fputs(record.classification, filePointer);
			record.id++;													/* increment record id */
			printf("Do you want to enter another record? (Y or N) ");       /* prompt for another iteration */
			scanf(" %c", &cont);
			printf("\n");
			
			}while (cont == 'y' || cont == 'Y');    						/* if Y/y continue if not end do while */
		fclose(filePointer);												/* close file */
	}																		/* end else */														
	return 0;																/* end program */
}																			