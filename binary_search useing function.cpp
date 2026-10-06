#include<stdio.h>
void binary_search(int n,int a[],int search);
int main()
{
	int n,i,search,position;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search:");
	scanf("%d",&search);
	binary_search(n,a,search);
	return 0;
}
void binary_search(int n,int a[],int search)
{
	int i,f=0,low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==search)
		{
			f=1;
			break;
		}
		else if(search>a[mid])
		{
			low=low+1;
		}
		else if(search<a[mid])
		{
			high=high-1;
		}
	}
	if (f==1)
	printf("The elements found %d position",mid+1);
	else 
	printf("The elements not found");
}
