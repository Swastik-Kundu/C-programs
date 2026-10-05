/*wacp to reverse the dighits of a whole no.*/
#include <stdio.h>
int main()
{
	int n,rem,reverse=0;
	printf("Enter the no. to be reversed= ");
	scanf("%d",&n);
	while(n!=0)
	{
	
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	printf("The reversed no. is %d",reverse);
	return 0;
}

