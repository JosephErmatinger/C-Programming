// PlayFun.c by Joe Ermatinger CIS 185 10/25/2018

#include <stdio.h>

void sayHello(void);
int getInput(void);
float calcResult(int);
void printResult(float);

int main(void)
{
	int numIn = 0; float result = 0.0f;
	sayHello();
	numIn = getInput();
	result = calcResult(numIn);
	printResult(result);
	return 0;
}
	void sayHello(void)
	{
		printf("Playfun Calculator by Joe Ermatinger\n");
		printf("Let's have fun!\n");
	}
	int getInput(void)
	{
		int localIn = 0;
		printf("Enter a whole number: ");
		scanf("%d", &localIn);
		return localIn;
	}	
	float calcResult(int x)
	{
		float y = 0.0f;
		y = (float) x / 2.0f;
		return y;
	}
	void printResult(float answer)
	{
		printf("The answer is %.2f\n", answer);
	}	