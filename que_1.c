#include<stdio.h>
main()
{
	int i,n1,n2,n3,n4,n5;

	printf("subject-1 marks = ");
	scanf("%d",&n1);
	printf("subject-2 marks = ");
	scanf("%d",&n2);
	printf("subject-3 marks = ");
	scanf("%d",&n3);
	printf("subject-4 marks = ");
	scanf("%d",&n4);
	printf("subject-5 marks = ");
	scanf("%d",&n5);
	
	int sum,avg;
	
	sum = n1+n2+n3+n4+n5;
	printf("sum of all sub = %d\n",sum);
	
	avg = sum/5;
	printf("avg = %d\n",avg);
	
	if(avg>80)
	{
		printf("gradeA");
	}
	else if(avg>=60 && avg<=80)
	{
		printf("gradeB");
	}
	else if(avg>=40 && avg<=60)
	{
		printf("gradeC");
	}
	else
	{
		printf("gradeD");
	}
	
	

}
