#include <stdio.h>
#define SIZE 10
void scan_arr(int *arr);
void print_arr(int * arr);
int main()
{
	int arr[SIZE];
	int i,temp,j;
	scan_arr(arr);
	for(i=0;i<SIZE-1;i++)
	{
		if(arr[i]>arr[i+1])
		{ //swap
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			for(j=i;j>0;j--)
			{
				if(arr[j]<arr[j-1])
				{  //swap
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
				}
			}

		}
	}
	print_arr(arr);


return 0;
}
void scan_arr(int *arr)
{
	printf("Please inter the elements of arr\n");
	int i;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
		
	}
}
void print_arr(int *arr)
{
	printf("The array = \n");
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d \n",arr[i]);
	}
}

for(i=1;i<size;i++)
{
	for(j=i;j>1;j--)
	{
		if(arr[j]<arr[j-1])
		temp=arr[j];
		arr[j]=arr[j-1];
		arr[j-1]=temp;
	}
}
