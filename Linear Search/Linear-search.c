#include <stdio.h>
#define SIZE 10
void scan_arr(int *arr);
void print_arr(int * arr);
int main()
{
	int i=0,j,arr[SIZE],found=0,index=-1,number= 10;
	scan_arr(arr);
	for(i=0;i<SIZE;i++)
	{
		if(arr[i]==number)
		{
			index=i;
			break;
		}
	}
	if(index==-1)
	{
		printf("The number is not exist");
	}
	else
	{
		printf("The number %d is found at index = %d",arr[index], index);
	}

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
