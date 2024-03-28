#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	printf("Enter the two  numbers");
	scanf("%d%d",&a,&b);
	(a>b?printf("\n number %d is greater",a):printf("\n number %d is greater",b));
	return 0;
}