#include<stdio.h>

void main()
{
    int i,n,A[10],t,j;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&A[i]);
    for(i=0;i<n;i++)
    for(j=0;j<n-1;j++)
    if(A[j]>A[j+1])
    {   
        t=A[j];
        A[j]=A[j+1];
        A[j+1]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",A[i]);

}
