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

int partition(int h,int l)
{
	int i,j,pivot,t;
	i=l-1;
	pivot=A[h];
	for(j=l;j<h;j++)
	{
		if(A[j]<pivot)
		{
			i++;
			t=A[i];
			A[i]=A[j];
			A[j]=t;
		}
	}
	j=i+1;
	t=A[j];
	A[j]=A[h];
	A[h]=t;
	return (j);
}
void quick(int high,int low)
{
	int p;
	if(low<high)
	{
		p= partition(high,low);
		quick(high,p+1);
		quick(p-1,low);
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
	quick(n-1,0);
	print();
}