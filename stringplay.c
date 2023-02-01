//string play

#include <stdio.h>
#include <string.h>
#include "fixgets.h" //compliments to harry, fixgets.h needs to be stored in same folder


int main(void)
{
	int x = 0;
	
	char Fname [11] = {'\0'};
	char Lname [16] = {'\0'};
	char salutation [33] = {'\0'};
	char scramble [5] = {'\0'};

	printf("Enter First Name: ");
	fixgets(Fname, 11, stdin);

	printf("Enter Last Name: ");
	fixgets(Lname, 16, stdin);

	strcpy(salutation, "Dear ");
	strcat(salutation, Fname);
	strcat(salutation, " ");
	strcat(salutation, Lname);

	scramble[x] = Lname[0];
	x++;
	scramble[x] = Lname[1];
	x++;
	scramble[x] = Fname[0];
	x++;
	scramble[x] = Fname[1];
	x++;
	scramble[x] = '\0';

	printf("%s\n", salutation);
	printf("%s\n", scramble);

	return 0;
}