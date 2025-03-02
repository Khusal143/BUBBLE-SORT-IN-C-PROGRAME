
#include <stdio.h>
void select(int a[],int n)
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[min])
			min = j;
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
}
void print(int a[],int n){
	int i;
	
	
	
	
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
	int main()
	{
		int n,i;
		printf("enter the size");
		scanf("%d",&n);
		int a[n];
		printf("\nunsorted array");
		for(i=0;i<n;i++)
		{
			scanf("%d ",&a[i]);
		}
	
	select(a,n);
	printf("\nsorted array ");
	print(a,n);
}





