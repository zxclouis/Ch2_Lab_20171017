#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int grade;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int fCount = 0;
	printf("Enter the letter grades.\n");
	printf("Enter the EOF character to end input.\n");

	while ((grade = getchar()) != EOF)
	{
		switch (grade)
		{
		case 'A':
		case 'a':
			++aCount;
			break;
		case 'B':
		case 'b':
			++bCount;
			break;
		case 'C':
		case 'c':
			++cCount;
			break;
		case 'D':
		case 'd':
			++dCount;
			break;
		case'F':
		case'f':
			++fCount;
			break;
		case'\n':
		case'\t':
		case' ':
			break;
		default:
			printf("Incorrect letter grade entered.");
			printf("Enter a new grade.\n");
			break;
		}
	}
	printf("\nTotals for each letter grade are:\n");
	printf("A: %d\n", aCount);
	printf("B: %d\n", bCount);
	printf("C: %d\n", cCount);
	printf("D: %d\n", dCount);
	printf("F: %d\n", fCount);
	system("pause");
	return 0;

}