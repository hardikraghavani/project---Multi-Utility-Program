#include<stdio.h>

main()
{
	int first_angle , second_angle , third_angle;
	
	printf("enter your value first angle =");
	scanf("%d",&first_angle);
	
	printf("enter your value second angle =");
	scanf("%d",&second_angle);
	
	third_angle = 180-(first_angle + second_angle);
	printf("Third_angle = %d",third_angle);
}
