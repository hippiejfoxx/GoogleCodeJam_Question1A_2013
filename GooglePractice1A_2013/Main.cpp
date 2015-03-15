#include <stdio.h>


int main()
{
	FILE * fileIn;
	int numTestCases;
	int sizeOfWhiteCircle;
	int amountOfPaint;

	fileIn = fopen("D:\\TEMP\\Google\\A-small-practice.in", "r");

	if (fileIn == NULL)
	{
		printf("Cannot open file\n");
		getchar();
		return 0;
	}

	fscanf(fileIn, "%d", &numTestCases);
	fscanf(fileIn, "%d %d", &sizeOfWhiteCircle, &amountOfPaint);

	printf("Number of test cases: %d\n", numTestCases);

	printf("size of white cirlce %d \n", sizeOfWhiteCircle);
	printf("Amount of paint : %d", amountOfPaint);

	

	getchar();

	fclose(fileIn);
	
	return 1;
}