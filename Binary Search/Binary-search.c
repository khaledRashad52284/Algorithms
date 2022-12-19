#include <stdio.h>
#define SIZE 5
void scan_arr(int *arr);
void print_arr(int * arr);
void Bubble_sort(int * arr);
int Binary_search(int *arr,int number);
int main()
{
	int arr[SIZE],number=10,ret;
	scan_arr(arr);

	ret=Bubble_sort(arr);
	if(ret=0)
	{
		printf("Not found")
	}
	else
	{
		printf("Found");
	}
	Binary_search(arr,number);
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
void Bubble_sort(int * arr)
{
	int j,i=0,temp,swapped=0;
	while(swapped!=1)
	{
		swapped=1;
		for(j=0;j<SIZE-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{ //swap
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

				swapped=0;
			}
		}
		i++;
	}
}
int Binary_search(int *arr,int number)
{
	int start=0 , mid, end=SIZE-1,found=0;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(number>arr[mid])
		{
			start=mid+1;
		}
		else if(number<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			found=1;
			break;
		}
	}
	return found;
}
