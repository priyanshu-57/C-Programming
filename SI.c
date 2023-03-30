#include <stdio.h>
int main()
{
	float p= 0, t= 0, r=0 ;
	float SI=0;
	printf("enter p, t & r");
	scanf("%f %f %f",&p, &t, &r);
	SI= (p*t*r)/100;
	printf("Simple interest is %f",SI);
	return 0;
}
