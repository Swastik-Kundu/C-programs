/*Input 2 numbers divide first with second and print the quotient and remainder. */
#include <stdio.h>
int main()
{
	int a,b,q,r;
	printf("Enter the no.s = ");
	scanf("%d",&a);
	scanf("%d",&b);
	q=(a/b);
	r=(a%b);
	printf("The Quotient is =%d",q);
	printf("The remainder is =%d",r);	
	return 0;
}
