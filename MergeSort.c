#include<stdio.h>
#include<stdlib.h>
void Merge(int *le,int * ri,int *a,int n)
{
	
	int i=0,j=0,k=0,mid=n/2;
	while(i<mid && j<n-mid)
	{
		if(le[i]<=ri[j])
		{
			a[k]=le[i];
			k++;
			i++;
		}
		else
		{
			
			a[k]=ri[j];
			k++;
			j++;
			
		}
		
	}
	while(i<mid)
	{
			a[k]=le[i];k++;i++;
	}
	while(j<n-mid)
	{
			a[k]=ri[j];k++;j++;
	}
}
void MergeSort(int *a,int n)
{
	if(n<2) return;
	int mid=n/2;	
	int *left,*right,i,j,k=0;
	left=(int*)malloc(sizeof(int)*mid);	
	right=(int*)malloc(sizeof(int)*(n-mid));
	
	
	for(i=0;i<mid;i++)
	{
		left[i]=a[k];
		k++;
	}
	
	for(j=0;j<(n-mid);j++)
	{
		right[j]=a[k];
		k++;
	}
	left[i]=999;
	right[j]=888;
	MergeSort(left,mid);
	MergeSort(right,n-mid);
	Merge(left,right,a,n);
	free(left);
	free(right);
	}

int main()
{
	int n,i;
	printf("Enter the No of Elements:");
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	MergeSort(a,n);
	
	printf("After sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	free(a);
	return 0;
}
