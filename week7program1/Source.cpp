#include<stdio.h>
#include<math.h>
int main()
{
	int x, y;
	printf("please enter your number = ");
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			y = pow(i, j);
			printf("%d^%d = %d   ",i,j,y);
		}
		printf("\n");
	}
}