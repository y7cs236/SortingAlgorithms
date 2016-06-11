#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int Partition(int *a,int l,int h)
{
	int pivot=a[h];
	int pindex=l,i;
	for(i=l;i<h;i++)
	{
		if(a[i]<pivot)
		{
			swap(&a[i],&a[pindex]);
			pindex++;
		}
	}
	swap(&a[pindex],&a[h]);
	
	return pindex;
}
void QuickSort(int *a,int low,int high)
{
	if(low<high)
	{
		int p= Partition(a,low,high);
		QuickSort(a,low,p-1);
		QuickSort(a,p+1,high);
	}
}
int main()
{
	int n,*a,i;
	scanf("%d",&n);
	a= (int*)malloc(n*sizeof(int));
	for(i =0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	QuickSort(a,0,n-1);
	printf("After Sorting:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 1;
}
