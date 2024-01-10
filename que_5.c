#include<stdio.h>

struct laptop{
	
	char company_name[100];
	char processor[100];
	int price;
	
};
main()
{
	int i,n;
	
	printf("number of laptop = ");
	scanf("%d",&n);
	
	struct laptop l[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter company name =");
		scanf("%s",&l[n].company_name);
		
		printf("enter processor = ");
		scanf("%s",&l[n].processor);
		
		printf("enter price = ");
		scanf("%d",&l[n].price);
	}
	
	printf("\n.......laptops........\n");
	
	for(i=0;i<n;i++)
	{
		printf("company name = %s\n",l[n].company_name);
		printf("processor = %s\n",l[n].processor);
		printf("price = %d\n",l[n].price);
	}
}
