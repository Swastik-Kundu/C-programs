/* 1+2+4+7+11 upto n terms  wacp to cal the given series*/
#include <stdio.h>
int main()
{
	int n,sum=0,i=1,d=1;
	printf("Enter the no.");
	scanf("%d",&n);
	while (i<=n)
	{
		sum=sum+d;
		i=i+1;
		d++;
	}
	printf("The sum is %d\n",sum);
	return 0;
}
