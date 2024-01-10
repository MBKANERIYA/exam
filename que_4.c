#include<stdio.h>

main()
{
	int n;
	
	printf("enter size of array = ");
	scanf("%d",&n);
	
	int a[n];
	int *p= a;
	
	int i;
	
	for(i=0;i<n;i++)
	{
		scanf("%d", p+i);
	}
	
	printf("even num \n");
	
	for(i=0;i<n;i++)
	{	
		if(a[i]%2==0)
		{
				printf("%d\n",*(p+i));
		}
	}
}
