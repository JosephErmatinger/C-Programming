#include <stdio.h>
#include <string.h>

int main()
{

char pig[100] = ""; 
char p[10] = "";
int i = 0;

printf("What word would you like to change into Pig Latin: ");
scanf("%s", pig);

unsigned long length = strlen(pig); 
strcat(p, &pig[0]);

for(i = 0; i < length; i++)
{
	pig[i] = pig[i + 1];
}

strcat(pig, p);
strcat(pig, "ay");
printf("%s", pig);

return 0;
}