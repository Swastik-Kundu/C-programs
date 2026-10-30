/* WACP to check if a no. is prime or not using while loop*/
#include<stdio.h>
int main()
{
	int n,c=0,i=1;
	printf("Enter a no.");
	scanf("%d",&n);
	while(i<=1)
	{
		if(n%i==0)
		{
			c=c+1;	
		}
		i++;
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
