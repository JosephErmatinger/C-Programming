// C program for the above approach
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{	

	// Variable Declarations
	time_t t;
	time(&t);

	// Display Heading 
	printf("\n%s", ctime(&t));
	printf("CSV editor Application by Joe Ermatinger 02/02/2023\n\n");
	
	// Substitute the file_path string with full path of CSV file
	FILE* fp = fopen("URLs.csv", "a");
	char url[99];
	
	if (!fp) {
		// Error in file opening
		printf("Can't open file!\n");
		return 0;}

	// Asking user input for the new record to be added
	printf("\nEnter URL\n\n");
	scanf("%s", &url);

	// Saving data in file
	fprintf(fp, "%s\n", url);
	printf("\nNew URL added to record\n");

	fclose(fp);
	return 0;
}
