#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("In function swap the numbers are %d,%d",*a,*b);
}
int main()
{
	int a,b;
	printf("Enter the two numbers");
	scanf("%d%d",&a,&b);
	printf("\n The numbers before change are %d,%d",a,b);
	swap(&a,&b);
	printf("After the function swap numbers are %d,%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n The numbers after change 1 is %d,%d",a,b);
	return 0;
}