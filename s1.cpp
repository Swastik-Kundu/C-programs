/* 2+5+8+11 upto n terms  wacp to cal the given series*/
#include <stdio.h>
int main()
{
	int n,sum=0,i=2;
	printf("Enter the no.");
	scanf("%d",&n);
	while (i<=n)
	{
		sum=sum+i;
		i=i+3;
	}
	printf("The sum is %d\n",sum);
	return 0;
}
