 // Welcome.c by Joe Ermatinger CIS185 11/16/2018
 /* Input:  Keyboard
    Output: Screen
    This program asks a user to input information and then uses that information to
	generate a password. Input will come from the keyboard using fixgets(). Output will 
	be displayed to the screen using printf(). The user will be prompted to enter their
	first name, middle initial, last name, student number, and high school name. Input will
	be stored in character arrays. Based on their input, a password will be generated. A welcome
	message will be displayed along with there newly generated password. */
 
 /* Header Files */
 #include <stdio.h>
 #include <string.h>
 #include "fixgets.h" //compliments to harry, fixgets.h needs to be stored in same folder
 
 /* Start Main */
 int main (void) 
 {
	/* Variable Declarations */ 
	int i = 0;
	/* Array Declarations */
	char firstName [11];
	char middleInitial [2];
	char lastName [16];
	char studentNumber [7];
	char highSchoolName [21];
	char message [111];
	char password [11];
	
	/* Display Heading */
	printf(" Welcome Student Application by Joe Ermatinger");
	
	/* Input Section */
	printf("\n\n First Name?\t\t"); //First Name Entry
	fixgets(firstName,11,stdin);
	
	printf("\n\n Middle Initial?\t"); // Middle Initial Entry
	fixgets(middleInitial,2,stdin);
	
	printf("\n\n Last Name?\t\t"); // Last Name Entry
	fixgets(lastName,16,stdin);
	
	printf("\n\n Student Number?\t"); // Student Number Entry
	fixgets(studentNumber,7,stdin);
	
	printf("\n\n Name of High School?\t"); // High School Name Entry
	fixgets(highSchoolName,21,stdin);
	
	/* Processing Section */
	strcpy(message, "\n\n\n Welcome to MCC, ");
	strcat(message, firstName);
	strcat(message, " ");
	strcat(message, middleInitial);
	strcat(message, ". ");
	strcat(message, lastName);
	strcat(message, " #");
	strcat(message, studentNumber);
	strcat(message, " from ");
	strcat(message, highSchoolName);
	strcat(message, "!");
	
	/* Password Processing Section */
	password[i] = studentNumber[0];
	i++;
	password[i] = studentNumber[1];
	i++;
	password[i] = firstName[0];
	i++;
	password[i] = firstName[1];
	i++;
	password[i] = middleInitial[0];
	i++;
	password[i] = lastName[0];
	i++;
	password[i] = lastName[1];
	i++;
	password[i] = firstName[2];
	i++;
	password[i] = studentNumber[2];
	i++;
	password[i] = lastName[2];
	i++;
	password[i] = '\0';
	/* Password is generated from a combination of 3 characters from studentNumber, 
	3 characters from firstName, 1 character from middleInitial, and 3 characters from lastName */
	
	/* Display Output Section */	
	printf("%s\n", message);
	printf("\n Your Password is %s", strupr(password)); 
	
	/* End Main */	
	return 0;
 }
 
 
	
	
	
	