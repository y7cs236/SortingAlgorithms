#include<stdio.h>

void SelectionSort(int *a,int n)
{
	int i,j,temp,iMin;
	
	for(i=0;i<n-1;i++)
	{
		iMin=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<a[iMin])
			{
				temp=a[iMin];
				a[iMin]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int i,n=8,a[]={8,2,5,3,6,1,4,5};
		printf("Before Sorting:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	SelectionSort(a,8);
	
	printf("After Sorting:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 1;
}
