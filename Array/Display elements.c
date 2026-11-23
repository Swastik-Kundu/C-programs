/*Wacp to take a input as an array and display it to the screen*/
#include <stdio.h>
int main()
{
	int a[5];
	int i,j;
	printf("Enter the elements into the array :\n");
	for (i=1; i<=5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(j=1; j<=5;j++)
	{
		printf("The element at index  %d is %d \n",j,a[j]);
	}
	return 0;
	
}
