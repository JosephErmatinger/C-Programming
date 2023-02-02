// C program for the above approach
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
	// Substitute the full file path for the string file_path
	FILE* fp = fopen("URLs.csv", "r");

	if (!fp)
		printf("Can't open file, check file path!\n");

	else {
		// Variable Declarations, Array size 1024
		char buffer[1024];
		int row = 0;
		int column = 0;
		time_t t;
		time(&t);

        // Display Heading 
		printf("\n%s", ctime(&t));
		printf("\nPrinting list of URLs!\n\n");
		
		while (fgets(buffer,1024, fp)) {
			column = 0;
			row++;
			// To avoid printing of column names in file can be changed according to need
			if (row == 0)
				continue;
			// Splitting the data
			char* value = strtok(buffer, ", ");

			while (value) {
				// Column 0
				if (column == 0) {
					printf("URL:     ");}
				printf("%s\n", value);
				value = strtok(NULL, ", ");
				column++;}}
		// Close file
		fclose(fp);}
		
	return 0;
}
