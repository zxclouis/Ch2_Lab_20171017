#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int h;
	int l;
	int u;
	int s;
	double w;
	printf("從多少cm?:");
	scanf_s("%d", &l);
	printf("到多少cm?:");
	scanf_s("%d", &u);
	printf("每隔多少cm?:");
	scanf_s("%d", &s);
	for (h = l; h <= u; h += s)
	{
		w = (h - 100)*0.9;
		printf("%dcm %.2fkg\n", h, w);
	}
	system("pause");
	return 0;
}