#include<stdio.h>
main()
{
	int n;
	
	printf("enter size of array = ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("odd num \n");
	for(i=0;i<n;i++)
	{
		
		if(a[i]%2==1)
		{
				printf("%d\n",a[i]);
		}
	}
	
	
}
