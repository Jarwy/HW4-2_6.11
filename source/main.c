#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
int pass;
size_t i;
int hold;

int main(void)
{
	printf("(a)\n");
	puts("Date items in original order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}//印出原數列	
	for (pass = 1; pass <SIZE; pass++)
	{
		
			for (i = 0; i < SIZE-pass; i++)
			{
				if (a[i] > a[i + 1])
				{
					hold = a[i];
					a[i] = a[i + 1];
					a[i + 1] = hold;
				}
			}
	}

	puts("\nDate items in ascending order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");

	//_________________________________________________________________________________//

	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int g;
	printf("\n(b)\n");
	printf("Origin:");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}//印出原數列
	printf("\n");

	for (pass = 1; pass <SIZE; pass++)
	{
		g = 0;
		for (i = 0; i < SIZE - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				g++;
			}
		}

		if (g == 0)
		{
			break;
		}

		printf("Loop %d:", pass);
		for (i = 0; i < SIZE; i++)
		{
			printf("%4d", a[i]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
