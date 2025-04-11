#include<stdio.h>
#include "MyCalc.h"
void main()
{
	int n1 , n2;
	printf("Enter the value of n1 and n2:");
	scanf("%d %d",&n1 , &n2);
	printf("\nSum=%d",Sum(n1,n2));
	printf("\nProduct=%d",Mul(n1,n2));
	printf("\nDifference=%d",Sub(n1,n2));
}
