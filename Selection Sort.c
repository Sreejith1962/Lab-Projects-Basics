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
void selsort()
{
	int i,key,j,temp;
	for(i=0;i<n-1;i++)
	{
		key = i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[key])
			{
				key=j;
			}
		}
		if(key!=i)
		{
			temp=A[key];
			A[key]=A[i];
			A[i]=temp;
		}
		
	}
}void print()
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
	selsort();
	print();
}