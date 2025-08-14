#include<stdio.h>  
void main()
{
	int n, digit, sum = 0, num;
	printf("enter the number=");
	scanf_s("%d", &n);
	num = n;
	while (n > 0)
	{
		digit = n % 10;
		sum = sum + (digit * digit * digit);
		n = n / 10;
	}
	if (num == sum)
	{
		printf("armstrong  number ");
	}
	else
	{
		printf("not armstrong number");
	}
}