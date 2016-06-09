#include<stdio.h>

void BubbleSort(int *a,int n)
{
	int i,j,temp;
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<n-2;j++)
		{
			if(a[j]>a[j+1])
			{
				temp= a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
		int i,n=8,a[]={8,7,6,5,4,3,2,1};
		printf("Before Sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	BubbleSort(a,8);
	
	printf("After Sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 1;
}
