#include<stdio.h>

main()
{
	int base_salary,hra,da,ta,gross_salary;
	
	printf("enter your value base salary =");
	scanf("%d",&base_salary);
	
	printf("enter your value hra =");
	scanf("%d",&hra);
	
	printf("enter your value da =");
	scanf("%d",&da);
	
	printf("enter your value ta =");
	scanf("%d",&ta);
	
	gross_salary = base_salary*hra/100;
	gross_salary = base_salary*da/100;
	gross_salary = base_salary*ta/100;
	gross_salary = base_salary + hra + da + ta;
	printf("Gross salary = %d",gross_salary,base_salary + hra + da + ta);
}
