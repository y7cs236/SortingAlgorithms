#include<stdio.h>
#include<stdlib.h>
void InsertionSort(int *a,int n)
{
	int i,hole,value;
	for(i =1;i<n;i++)
	{
		hole=i;
		value=a[hole];
		while(hole>0 && a[hole-1]>a[hole])
		{
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=value;
		
	}
}
int main()
{
	int *a,n,i;
	scanf("%d",&n);
	a= (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	InsertionSort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 1;
}
