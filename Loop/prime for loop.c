/* WACP to check if a no. is prime or not using while loop*/
#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter a no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;	
		}
	}
	if (c==2)
	{
		printf("%d ia a prime no.",n);
	}
	else
	{
		printf("%d is not a prime no.",n);
	}
}
