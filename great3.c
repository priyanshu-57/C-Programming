// WAP to find greatest number among three number
#include<stdio.h>
int main()
{
	int a=0, b=0, c=0;
	printf("Enter three numbers");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && b>c)
	{
		printf("%d is greatest ", a);
	}
	else if (b>c && c>a) // else and if shouldnot be written together 
	{
		printf("%d is greatest",b);
	}
	else if (c>a && a> b)
	{
		printf("%d is greatest",c);
	}
	else
	{
		printf("All given no. all equal");
	}
return 0;
}

