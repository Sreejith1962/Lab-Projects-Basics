#include<stdio.h>
int A[20],n;
void read()
{
	int i;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
}
void insort()
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
	
		key=A[i];
		j=i-1;
		while(key<A[j]&&j>=0)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}
void print()
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d",A[i]);
	}
}
void main()
{
	read();
	insort();
	print();
}